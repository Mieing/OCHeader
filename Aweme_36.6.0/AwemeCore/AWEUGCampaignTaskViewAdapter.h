@class BDUGLuckyActivityTaskModel, AWECampaignWatchTaskModel, NSString, UIView;
@protocol AWEUGCountDownViewProtocol;

@interface AWEUGCampaignTaskViewAdapter : NSObject <AWEUGCountDownViewStateDelegate, AWEUGStateOutputerProtocol>

@property (retain, nonatomic) BDUGLuckyActivityTaskModel *baseInfoModel;
@property (retain, nonatomic) AWECampaignWatchTaskModel *watchTaskModel;
@property (retain, nonatomic) UIView<AWEUGCountDownViewProtocol> *countDownView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskDidEnterScene:(id)a0;
- (void)taskDidLeveaScene:(id)a0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)a0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (void)taskDidFinishReportWithModel:(id)a0;
- (void)setupCountDownViewWithTask:(id)a0;
- (id)initializeCountDownViewConfigWithTask:(id)a0;
- (id)getCountDown:(double)a0;
- (id)formIncompletePopupSchema:(id)a0;
- (long long)p_getMinutes:(double)a0;
- (long long)p_getSeconds:(long long)a0 progress:(double)a1;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
