@class IESLiveRTCPlayerConfig, NSString, ByteRTCWTNStream;
@protocol IESLiveRTCPlayerControllerDelegate;

@interface IESLiveRTCPlayerController : NSObject <ByteRTCWTNStreamDelegate>

@property (retain, nonatomic) IESLiveRTCPlayerConfig *config;
@property (retain, nonatomic) ByteRTCWTNStream *streamPlayer;
@property (copy, nonatomic) NSString *streamID;
@property (nonatomic) struct __CVBuffer { } *curLutPixelBuffer;
@property (nonatomic) int continueLowFpsCount;
@property (nonatomic) BOOL isFallbacking;
@property (nonatomic) BOOL isPlayStart;
@property (weak, nonatomic) id<IESLiveRTCPlayerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlay;
- (void)startPlayWithStreamID:(id)a0;
- (void)updateLivePlayersEyesProtectState:(BOOL)a0 intensityValue:(double)a1 filterItem:(id)a2;
- (void)renderStream:(id)a0 onView:(id)a1;
- (void)p_createSharedRTCEngine;
- (void)p_syncEngineParams;
- (void)p_syncPlayerParams;
- (void)p_setMuted:(BOOL)a0;
- (void)setRuntimeParameters:(id)a0;
- (void)onWTNDataMessageReceived:(id)a0 andMessage:(id)a1 andSourceType:(long long)a2;
- (void)onWTNFirstRemoteAudioFrame:(id)a0;
- (void)onWTNFirstRemoteVideoFrameDecoded:(id)a0 withFrameInfo:(id)a1;
- (void)onWTNRemoteAudioStats:(id)a0 audioStats:(id)a1;
- (void)onWTNRemoteVideoStats:(id)a0 videoStats:(id)a1;
- (void)onWTNSEIMessageReceived:(id)a0 andChannelId:(int)a1 andMessage:(id)a2;
- (void).cxx_destruct;
- (void)setMuted:(BOOL)a0;
- (id)init;
- (void)setVolume:(double)a0;
- (void)reset;
- (void)dealloc;

@end
