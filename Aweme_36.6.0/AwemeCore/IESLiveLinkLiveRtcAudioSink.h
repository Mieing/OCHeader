@class NSString, IESLiveLinkLiveRtc;

@interface IESLiveLinkLiveRtcAudioSink : NSObject <ByteRTCAudioFrameObserver>

@property (copy, nonatomic) NSString *userId;
@property (weak, nonatomic) IESLiveLinkLiveRtc *owner;
@property (copy, nonatomic) id /* block */ audioFrameCallback;
@property (copy, nonatomic) id /* block */ anchorMixedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserId:(id)a0 owner:(id)a1 block:(id /* block */)a2 anchorMixedBlock:(id /* block */)a3;
- (void)onPlaybackAudioFrameBeforeMixing:(id)a0 audioFrame:(id)a1;
- (void)onCaptureMixedAudioFrame:(id)a0;
- (void)onMixedAudioFrame:(id)a0;
- (void)onPlaybackAudioFrame:(id)a0;
- (void)onRecordAudioFrame:(id)a0;
- (void)onRemoteUserAudioFrame:(id)a0 audioFrame:(id)a1;
- (void).cxx_destruct;

@end
