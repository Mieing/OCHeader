@class NSString, UIImageView, CAShapeLayer, UILabel, AFDNewSchoolStoryFeedOriginalItemContentView, AFDNewSchoolStoryFeedCellMediaContentView;

@interface AFDNewSchoolStoryFeedCellMediaView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *repostIconImageView;
@property (retain, nonatomic) UILabel *repostLabel;
@property (retain, nonatomic) AFDNewSchoolStoryFeedOriginalItemContentView *originContentDescView;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellMediaContentView *contentContainerView;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedAction;
@property (copy, nonatomic) id /* block */ baseContainerViewTappedActionWithGesture;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) long long cutType;
@property (nonatomic) BOOL hasBottomBar;
@property (nonatomic) BOOL clearBottomCorner;
@property (nonatomic) BOOL clearBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (double)protectedPanelHeight;
- (void)baseContainerViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;

@end
