@class AWEGradientView, NSString, UIImageView, DUXButton, UILabel, UIScrollView, UIView;

@interface AWEMRSubscribeBasePanelView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titlePrefixLabel;
@property (retain, nonatomic) UILabel *titleSuffixLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXButton *negativeButton;
@property (retain, nonatomic) DUXButton *positiveButton;
@property (nonatomic) BOOL isHorizonPanel;
@property (retain, nonatomic) AWEGradientView *shadowView;
@property (readonly, nonatomic) BOOL hasMiddleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)suggestPanelAlignment;
+ (BOOL)isHorizonPanel;
+ (double)suggestPanelWidth;
+ (double)horizonRightPadding;

- (id)middleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasMiddleView:(BOOL)a1;
- (void)setupHorizonContainerViews;
- (void)setupVerticalContainerViews;
- (void)setupHorizonLayout;
- (void)setupVerticalLayout;
- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (void)setShadowViewHiddenIfNeed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupLayout;

@end
