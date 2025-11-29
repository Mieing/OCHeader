@class AWEECShoppingAIGuideContext, UIImageView, UILabel, UIView, UIButton;

@interface AWEECShoppingAIGuideHeaderView : UIView

@property (retain, nonatomic) UIButton *cartButton;
@property (retain, nonatomic) UILabel *cartBadgeLabel;
@property (nonatomic) BOOL switchArrowOrientationDown;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *title;
@property (retain, nonatomic) UIImageView *slogan;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *switchGuideImgView;
@property (retain, nonatomic) UIView *moreOptionArea;
@property (copy, nonatomic) id /* block */ moreOptionBlock;
@property (copy, nonatomic) id /* block */ switchGuideBlock;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;

- (void)tapMoreOption:(id)a0 sender:(id)a1;
- (void)onTapTitle:(id)a0;
- (void)onTapSwitchGuide:(id)a0;
- (void)beforeAnimation;
- (void)animateTitleAppear;
- (void)setupCartEntryWithModel:(id)a0;
- (void)updateCartNumber:(long long)a0;
- (void)setupHeaderEntryWithModel:(id)a0;
- (void)rotateSwitchArrowImageToOrientation:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
