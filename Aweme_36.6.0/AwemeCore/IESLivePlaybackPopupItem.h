@class UIColor, NSArray, UIView, CABasicAnimation;
@protocol IESLivePlaybackPopupView;

@interface IESLivePlaybackPopupItem : IESLiveDynamicModel

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSArray *disableAutoBackgroundColorTypes;
@property (nonatomic) long long itemType;
@property (nonatomic) long long viewType;
@property (nonatomic) double portraitHeight;
@property (nonatomic) BOOL forceLandscapeBottom;
@property (nonatomic) BOOL enableIPadMode;
@property (retain, nonatomic) UIView<IESLivePlaybackPopupView> *popupView;
@property (copy, nonatomic) id /* block */ onShowStart;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (copy, nonatomic) id /* block */ shouldHide;
@property (copy, nonatomic) id /* block */ onHideStart;
@property (copy, nonatomic) id /* block */ onHideCompletion;
@property (nonatomic) double offsetWhenKeyboardShow;
@property (copy, nonatomic) id /* block */ offsetChangedWhenKeyboardShowBlock;
@property (copy, nonatomic) id /* block */ offsetWhenKeyboardShowBlock;
@property (retain, nonatomic) CABasicAnimation *customAnimation;
@property (nonatomic) BOOL hideWhenTapBackgroundView;
@property (nonatomic) BOOL hideWhenPanedown;
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

- (struct CGSize { double x0; double x1; })containerViewSize;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
