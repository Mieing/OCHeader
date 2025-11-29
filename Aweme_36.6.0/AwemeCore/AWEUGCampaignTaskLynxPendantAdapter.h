@class BDUGLuckyActivityTaskModel, AWECampaignWatchTaskModel, AWEUGCountDownLynxView, NSString, UIView;
@protocol AWEUGCountDownViewProtocol;

@interface AWEUGCampaignTaskLynxPendantAdapter : NSObject <AWEUGCountDownViewStateDelegate, BDXContainerLifecycleProtocol, AWEUGStateOutputerProtocol>

@property (retain, nonatomic) BDUGLuckyActivityTaskModel *baseInfoModel;
@property (retain, nonatomic) AWECampaignWatchTaskModel *watchTaskModel;
@property (readonly, nonatomic) AWEUGCountDownLynxView *lynxCountDownView;
@property (copy, nonatomic) NSString *currentScene;
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
- (void)showOnTopViewController:(id)a0;
- (BOOL)isHideForScene:(id)a0 defaultValue:(BOOL)a1;
- (id)hideScenes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTask:(id)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
