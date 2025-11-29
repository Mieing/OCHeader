@class UIStackView, UIView, NSArray, MMPageSheetConfig, MMPageSheetProgressiveDragView, UIImageView, MMPageSheetProgressiveAnimationView, UILabel, MMUIButton;
@protocol MMPageSheetNavigationBarDelegate;

@interface MMPageSheetNavigationBar : UIView

@property (nonatomic) BOOL isChildPage;
@property (retain, nonatomic) MMPageSheetConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *dragDownButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *leftNavButton;
@property (retain, nonatomic) UIView *rightNavButton;
@property (retain, nonatomic) NSArray *leftBarButtonItems;
@property (retain, nonatomic) NSArray *rightBarButtonItems;
@property (retain, nonatomic) UIView *customTitleView;
@property (retain, nonatomic) UIView *titleRightIconView;
@property (retain, nonatomic) UIStackView *leftButtonStackView;
@property (retain, nonatomic) UIStackView *rightButtonStackView;
@property (retain, nonatomic) UIView *navSepLine;
@property (retain, nonatomic) MMPageSheetProgressiveDragView *progressiveDragDownView;
@property (retain, nonatomic) MMPageSheetProgressiveAnimationView *progressiveStickDragDownView;
@property (nonatomic) long long navType;
@property (nonatomic) BOOL preferredCenterAlignment;
@property (nonatomic) BOOL isTranslucent;
@property (nonatomic) double leftSideLeftMargin;
@property (nonatomic) double titleOffset;
@property (nonatomic) BOOL isNavAddDragDown;
@property (weak, nonatomic) id<MMPageSheetNavigationBarDelegate> delegate;

- (void)updateConfig:(id)a0 isChildPage:(BOOL)a1;
- (id)extractConstrainedCsutomViewFromButtonItem:(id)a0;
- (void)addPressedEventsForButton:(id)a0;
- (void)buttonDidGetPressed:(id)a0;
- (void)buttonDidGetReleased:(id)a0;
- (void)layoutSubviews;
- (void)clickCloseButton:(id)a0;
- (void)clickDragDownButton:(id)a0;
- (id)makeCloseButtonWithImageColor:(id)a0 style:(unsigned int)a1;
- (id)makeBackButtonWithImageColor:(id)a0;
- (void)applyGradientMaskToLabel:(id)a0;
- (void)onPageSheetDidAppear;
- (void)onPageSheetDragToDismissOffset:(double)a0;
- (void)onPageSheetDragToDismissOffset:(double)a0 animated:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)fixSizeAndAddArrangedSubview:(id)a0 onStackView:(id)a1;
- (void).cxx_destruct;

@end
