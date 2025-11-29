@class UIImageView;

@interface AWEModernFeedImageAwemeViewController : AWEModernFeedBaseCellController

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *imageTagView;
@property (retain, nonatomic) UIImageView *atlasTagView;

+ (BOOL)shouldUseADTileControllerWith:(id)a0;
+ (void)__awe__codeRunnerRun_38;

- (void)didEndShowing;
- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)playerWillEnterPureMode;
- (void)playerDidExitPureMode;
- (void)updatePrivacyTagView;
- (void).cxx_destruct;
- (id)contentView;
- (id)transitionContext;
- (void)viewWillLayoutSubviews;
- (void)updateWithModel:(id)a0;

@end
