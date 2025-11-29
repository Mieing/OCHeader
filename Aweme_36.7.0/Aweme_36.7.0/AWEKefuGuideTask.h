@class AWEKefuGuideCommandModel, AWEKefuGuideContainerView, AWEKefuGuideView;

@interface AWEKefuGuideTask : NSObject

@property (retain, nonatomic) AWEKefuGuideView *guideView;
@property (nonatomic) long long status;
@property (nonatomic) double showTime;
@property (retain, nonatomic) AWEKefuGuideContainerView *container;
@property (readonly, nonatomic) AWEKefuGuideCommandModel *commandModel;
@property (copy, nonatomic) id /* block */ showCallBack;
@property (copy, nonatomic) id /* block */ dismissCallBack;
@property (copy, nonatomic) id /* block */ completionCallBack;

- (void)p_triggerShowCallBackWithResult:(BOOL)a0 errorMessage:(id)a1;
- (void)p_showGuide;
- (void)p_handleResWithCompletion:(id /* block */)a0;
- (void)p_dismissGuideWithReason:(id)a0 limitShowDuration:(id)a1;
- (void)p_triggerDismissCallBackWithInfo:(id)a0;
- (void)p_closeTask;
- (void)p_handleResWithAction:(id)a0 completion:(id /* block */)a1;
- (id)initWithCommandModel:(id)a0 container:(id)a1;
- (void)dismissWithReason:(id)a0 limitShowDuration:(id)a1;
- (void).cxx_destruct;
- (void)show;

@end
