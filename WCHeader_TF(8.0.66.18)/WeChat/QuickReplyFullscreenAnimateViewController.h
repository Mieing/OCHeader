@class CContact, MMPageSheetAdapter, UIVisualEffectView, UIView, CMessageWrap;

@interface QuickReplyFullscreenAnimateViewController : MMWindowViewController

@property (retain, nonatomic) UIView *animateTopView;
@property (retain, nonatomic) UIView *customBackgroundView;
@property (retain, nonatomic) UIView *animateContentView;
@property (retain, nonatomic) UIView *animateBottomBlurView;
@property (retain, nonatomic) UIView *animateBottomView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *foregroundBlurView;
@property (retain, nonatomic) UIView *presentingVCSnapshotView;
@property (retain, nonatomic) UIView *rootSnapshotView;
@property (nonatomic) double targetCellOffset;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheet;
@property (retain, nonatomic) CMessageWrap *targetMessage;
@property (retain, nonatomic) CContact *sessionContact;

+ (void)showFullscreenAnimateWith:(id)a0 openSessionContact:(id)a1;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)backgroundFadeInAnimate;
- (void)sessionViewPopUpAnimate;
- (void)sessionSnapshotFadeOutAnimate;
- (void)slideRightAnimate;
- (double)popupAnimateEndY;
- (double)bottomViewHeight;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)dismissToRoot:(id /* block */)a0;
- (void)openSessionWithComplete:(id /* block */)a0;
- (void).cxx_destruct;

@end
