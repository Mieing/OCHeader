@class NSString, AWEFeedVideoSingleCardLayoutAdjuster, AWEModernFeedContentContainerView, UIImageView, AWEModernFeedOriginalItemContentView, AWEFeedVideoCardQualityLayoutAdjuster, AWEFeedVideoTagView, CAShapeLayer, UILabel;

@interface AWEModernFeedBaseContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *cornerMaskingView;
@property (retain, nonatomic) AWEFeedVideoTagView *ugcShowcaseTagView;
@property (retain, nonatomic) UIImageView *repostIconImageView;
@property (retain, nonatomic) UILabel *repostLabel;
@property (retain, nonatomic) AWEModernFeedOriginalItemContentView *originContentDescView;
@property (retain, nonatomic) AWEFeedVideoSingleCardLayoutAdjuster *layoutAdjuster;
@property (retain, nonatomic) AWEFeedVideoCardQualityLayoutAdjuster *qualityLayoutAdjuster;
@property (retain, nonatomic) AWEModernFeedContentContainerView *contentContainerView;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedAction;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedActionWithGesture;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long cutType;
@property (nonatomic) BOOL hasBottomBar;
@property (nonatomic) BOOL clearBottomCorner;
@property (nonatomic) BOOL clearBorder;
@property (nonatomic) BOOL clearBorderForAdConvertButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)drawQualityCornerOpt;

- (void)themeDidChange:(id)a0;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (double)protectedPanelHeight;
- (void)baseContainerViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
