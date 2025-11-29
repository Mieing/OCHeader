@class NSString;

@interface AWEACCFeedbackImpl : NSObject <ACCFeedbackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acc_studioRegisterParsers;
- (void)acc_recordForVideoUpload:(unsigned long long)a0 code:(long long)a1 stage:(long long)a2;
- (void)acc_recordForVideoMerge:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForVideoRecord:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForCameraInit:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForSaveVideoDraft:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForLoadVideoDraft:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForDeleteVideoDraft:(unsigned long long)a0 code:(long long)a1;
- (void)acc_recordForTotalVideoDraft:(unsigned long long)a0 code:(long long)a1 draftCreationData:(id)a2;
- (void)acc_recordForVideoDraftTimeline:(unsigned long long)a0 code:(long long)a1 draftInfo:(id)a2 title:(id)a3;

@end
