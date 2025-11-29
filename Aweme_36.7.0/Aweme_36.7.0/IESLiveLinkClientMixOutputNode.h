@class NSString, IESLiveLinkTranscoderManager;

@interface IESLiveLinkClientMixOutputNode : IESLiveLinkOutputNode <IESLiveLinkTranscoderDataDelegate>

@property (weak, nonatomic) IESLiveLinkTranscoderManager *transcoderManager;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL isAppInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBackgroundStatusChanged;
- (void)onMixingAudioFrame:(id)a0 sampleCount:(long long)a1 channel:(long long)a2 sampleRate:(long long)a3 timeStamp:(long long)a4 taskID:(id)a5;
- (void)onMixingVideoFrame:(struct __CVBuffer { } *)a0 taskID:(id)a1;
- (void)onMixingDataFrame:(id)a0 taskID:(id)a1;
- (id)initWithTranscoderManager:(id)a0 taskID:(id)a1 identifier:(id)a2;
- (int)expectedFrameIndex;
- (void).cxx_destruct;
- (void)dealloc;

@end
