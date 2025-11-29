@class UIImageView, WCFinderFeedContentVM, UILabel, UIView, WCFinderNormalProgressBar;

@interface WCFinderPlayRateSelectPanelView : MMUIView

@property (copy, nonatomic) id /* block */ shownAction;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ selectAction;
@property (retain, nonatomic) UIView *gradientView;
@property (weak, nonatomic) UIView *maskBGView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) double curruntShowingPlayRate;
@property (nonatomic) BOOL currentIsTouchingBtn;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderNormalProgressBar *progressBar;

- (void)showOnView:(id)a0 withVM:(id)a1;
- (void)onDismissAction;
- (void)onDismiss;
- (BOOL)isTouchingLockAreaWithGuesture:(id)a0;
- (void)handleLongPressGuesture:(id)a0 stateModel:(id)a1;
- (void)_showGradientView;
- (void)setProgressBarValue:(double)a0;
- (void)addObserver;
- (void)removeObserver;
- (void)onEnterBackground:(id)a0;
- (void)onResignActive:(id)a0;
- (void)handleEnterBackgroundEvent;
- (void).cxx_destruct;

@end
