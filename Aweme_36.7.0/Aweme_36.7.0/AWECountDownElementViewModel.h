@class AWECountDownAnchorViewViewModel, NSString, AWECountDownTask, AWEAwemeModel, AWECampaignTaskModel;

@interface AWECountDownElementViewModel : NSObject

@property (retain, nonatomic) AWECountDownTask *timerTask;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWECampaignTaskModel *taskModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) AWECountDownAnchorViewViewModel *anchorViewModel;

+ (BOOL)shouldShowElement:(id)a0 referString:(id)a1;

- (void)bindEvent;
- (void)videoPlay;
- (void)videoPause;
- (void)timerViewDidClicked;
- (void)configAnchorViewModel;
- (id)spliceContentViewWithCount:(unsigned long long)a0;
- (id)getFailureToast;
- (void)reportActivityResultWithComplete:(id /* block */)a0;
- (void)configWithModel:(id)a0 referString:(id)a1;
- (void)videoResume;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
