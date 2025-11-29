@class UIView, NSString, RACDisposable, NSArray, IESLivePlayerScaleConfig, CABasicAnimation, IESLivePresentNavController, NSData, UIColor;
@protocol IESLivePopupView;

@interface IESLivePopupItem : IESLiveDynamicModel

@property (retain, nonatomic) IESLivePresentNavController *nav;
@property (nonatomic) long long animType;
@property (nonatomic) BOOL enablePanGesture;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ playerScaleShouldStart;
@property (copy, nonatomic) id /* block */ playerScaleShouldEnd;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSArray *disableAutoBackgroundColorTypes;
@property (retain, nonatomic) UIColor *containerColor;
@property (nonatomic) long long itemType;
@property (nonatomic) long long viewType;
@property (nonatomic) double portraitHeight;
@property (nonatomic) BOOL enableDynamicHeight;
@property (nonatomic) BOOL forceLandscapeBottom;
@property (nonatomic) BOOL enableIPadMode;
@property (nonatomic) BOOL enablePlayerScale;
@property (retain, nonatomic) IESLivePlayerScaleConfig *scaleConfig;
@property (retain, nonatomic) UIView<IESLivePopupView> *popupView;
@property (weak, nonatomic) IESLivePopupItem *presentingItem;
@property (nonatomic) BOOL enableContentInset;
@property (retain, nonatomic) NSString *panelScene;
@property (copy, nonatomic) id /* block */ panMoveSlaveBlock;
@property (copy, nonatomic) id /* block */ panMoveCompleteSlaveBlock;
@property (copy, nonatomic) id /* block */ onShowStart;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ shouldHide;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (nonatomic) double offsetWhenKeyboardShow;
@property (nonatomic) BOOL enableCloseTapWhenKeyboardShow;
@property (copy, nonatomic) id /* block */ offsetChangedWhenKeyboardShowBlock;
@property (copy, nonatomic) id /* block */ offsetWhenKeyboardShowBlock;
@property (retain, nonatomic) CABasicAnimation *customAnimation;
@property (retain, nonatomic) CABasicAnimation *customAnimationHide;
@property (retain, nonatomic) NSData *hideAnimImageData;
@property (nonatomic) struct CGSize { double x0; double x1; } hideAnimImageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hideAnimFrame;
@property (nonatomic) BOOL hideWhenTapBackgroundView;
@property (nonatomic) BOOL hideWhenPanedown;
@property (copy, nonatomic) id /* block */ tapBackgroundInterceptor;
@property (nonatomic) BOOL enableCornerRadii;
@property (nonatomic) double cornerRadii;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL subViewsMayPassThroughCornerRadii;
@property (nonatomic) BOOL enableCornerRadiiLandScape;
@property (nonatomic) double cornerRadiiLandScape;
@property (nonatomic) unsigned long long rectCornerLandScape;
@property (nonatomic) BOOL subViewsMayPassThroughCornerRadiiLandScape;
@property (nonatomic) double leftRightInsets;
@property (nonatomic) double upBottomInsetsLandScape;
@property (nonatomic) double rightOffsetLandScape;
@property (nonatomic) double widthLandScape;
@property (nonatomic) BOOL needAccessModal;
@property (nonatomic) BOOL disableExtraLayout;

+ (id)popupItemWithView:(id)a0 itemType:(long long)a1 viewType:(long long)a2 animType:(long long)a3 backgroudContainer:(id)a4 showCallback:(id /* block */)a5 hideCallback:(id /* block */)a6;

- (void)didSetAttachingDIContext;
- (struct CGSize { double x0; double x1; })containerViewSize;
- (void)checkBackgroundContainer:(id)a0;
- (void)disposableIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)clean;

@end
