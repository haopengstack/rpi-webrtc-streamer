/*
Copyright (c) 2018, rpi-webrtc-streamer Lyu,KeunChang

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef UTILS_STATE_PRINTER_H_
#define UTILS_STATE_PRINTER_H_

#pragma once

#include <assert.h>
#include <string>

#include "api/mediastreaminterface.h"
#include "api/peerconnectioninterface.h"

namespace utils {

std::string PrintSignalingState(
        const webrtc::PeerConnectionInterface::SignalingState state);

std::string PrintIceGatheringState(
        const webrtc::PeerConnectionInterface::IceGatheringState state);

std::string PrintPeerConnectionState(
        const webrtc::PeerConnectionInterface::PeerConnectionState state);

std::string PrintPeerIceConnectionState(
        const webrtc::PeerConnectionInterface::IceConnectionState state);

// It is not a printer for state, but an Ice related enum printer.
std::string PrintIceTransportsType(
        const webrtc::PeerConnectionInterface::IceTransportsType type);
std::string PrintBundlePolicy(
        const webrtc::PeerConnectionInterface::BundlePolicy type);
std::string PrintRtcpMuxPolicy(
        const webrtc::PeerConnectionInterface::RtcpMuxPolicy type);
std::string PrintTlsCertPolicy(
        const webrtc::PeerConnectionInterface::TlsCertPolicy type);
};

#endif  // UTILS_STATE_PRINTER_H_

