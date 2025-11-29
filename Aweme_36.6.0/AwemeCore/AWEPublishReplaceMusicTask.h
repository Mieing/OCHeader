@class NSError, AWEPublishReplaceMusicCreateModelStage, NSString;

@interface AWEPublishReplaceMusicTask : AWEPublishCommonTask <AWEPublishStageDelegate>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEPublishReplaceMusicCreateModelStage *createModelStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishStage:(id)a0 didChangeStatus:(long long)a1 userInfo:(id)a2;
- (void)trackEventPublishDone;
- (void)showReplaceMusicPublishingAlert;
- (void)trackEventPublishFailWithError:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)resume;

@end
