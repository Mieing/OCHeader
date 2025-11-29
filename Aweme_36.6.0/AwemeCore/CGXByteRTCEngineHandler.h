@class NSString;

@interface CGXByteRTCEngineHandler : NSObject <ByteRTCEngineDelegate> {
    struct shared_ptr<xplay::bytertc::IByteRTCEngineHandler> { struct IByteRTCEngineHandler *__ptr_; struct __shared_weak_count *__cntrl_; } _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct RemoteStreamKey { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned char x2; })ocRemoteStreamKey2cRemoteStreamKey:(id)a0;
- (void)rtcEngine:(id)a0 log:(id)a1;
- (void)rtcEngine:(id)a0 onConnectionStateChanged:(long long)a1;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onNetworkDetectionResult:(unsigned long long)a1 quality:(unsigned long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)rtcEngine:(id)a0 onNetworkDetectionStopped:(unsigned long long)a1;
- (void)rtcEngine:(id)a0 onRemoteAudioStateChanged:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)rtcEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onRemoteVideoStateChanged:(id)a1 withVideoState:(long long)a2 withVideoStateReason:(long long)a3;
- (void)rtcEngine:(id)a0 onSEIMessageReceived:(id)a1 andMessage:(id)a2;
- (void)rtcEngine:(id)a0 onVideoFramePlayStateChanged:(id)a1 rtcUser:(id)a2 state:(unsigned long long)a3;
- (void)rtcEngine:(id)a0 onWarning:(long long)a1;
- (void).cxx_destruct;
- (id)initWithHandler:(struct shared_ptr<xplay::bytertc::IByteRTCEngineHandler> { struct IByteRTCEngineHandler *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void)dealloc;

@end
