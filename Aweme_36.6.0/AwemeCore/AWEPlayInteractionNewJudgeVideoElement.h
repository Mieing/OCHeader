@class AWEJudgeVideoView;

@interface AWEPlayInteractionNewJudgeVideoElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEJudgeVideoView *judgeVideoView;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackOnDisplay;
- (void)updateJudgeVideoView;
- (void)hideJudgeVideoView;
- (void)showJudgeVideoView;
- (void)handleVideo:(id)a0 accept:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
