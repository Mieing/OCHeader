@class NSError, AWEPublishCreateModelStage, NSString;

@interface AWEPublishLivePlaybackTask : AWEPublishCommonTask <AWEPublishStageDelegate>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEPublishCreateModelStage *createModelStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishStage:(id)a0 didChangeStatus:(long long)a1 userInfo:(id)a2;
- (void)trackEventWithStage:(id)a0 status:(long long)a1;
- (void)trackEventPublishDone;
- (void)showLivePlaybackPublishingAlert;
- (void)trackEventPublishFail;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;

@end
