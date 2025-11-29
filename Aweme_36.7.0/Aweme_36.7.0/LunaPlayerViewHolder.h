@class LunaCyclePageView, NSString, AWEMusicSingleTabTopView, AWEMusicExceptionalView, AWEMusicSubPlayerNavigatorView, AWEUILoadingView;
@protocol LunaPlayerViewHolderDelgate;

@interface LunaPlayerViewHolder : UIView <AWEMusicExceptionalViewDelegate>

@property (retain, nonatomic) LunaCyclePageView *cyclePage;
@property (retain, nonatomic) AWEMusicSubPlayerNavigatorView *navigationBar;
@property (retain, nonatomic) AWEMusicSingleTabTopView *singleTabTopView;
@property (retain, nonatomic) AWEMusicExceptionalView *noNetView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL showSubsCenter;
@property (weak, nonatomic) id<LunaPlayerViewHolderDelgate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noNetViewDidTapTryAgain:(id)a0;
- (void)loadingShow;
- (void)loadingDismiss;
- (void)showNoNetView;
- (void)dismissNoNetView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
