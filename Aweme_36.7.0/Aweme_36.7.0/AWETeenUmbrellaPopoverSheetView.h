@class UIView, NSArray, AWETeenAgeGuideManager, UIImageView, UIButton, CAGradientLayer, NSMutableArray, UILabel;

@interface AWETeenUmbrellaPopoverSheetView : UIView

@property (retain, nonatomic) AWETeenAgeGuideManager *ageAlertManager;
@property (copy, nonatomic) NSArray *sheetItems;
@property (retain, nonatomic) NSMutableArray *sheetItemViews;
@property (retain, nonatomic) UIView *viewMask;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *underImage;
@property (retain, nonatomic) CAGradientLayer *contentGradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeTeenButton;
@property (nonatomic) BOOL isSheetViewShowing;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) BOOL isLightTheme;

- (id)initWithDefaultStyle;
- (void)showWithAnimation;
- (void)dismissWithAnimation;
- (void)p_setupViews;
- (id)p_ageString;
- (id)p_setupDefaultItems;
- (id)initWithSheetItems:(id)a0;
- (void)p_setupShadow;
- (void)p_setupSheetItemsWithTopPadding:(double)a0;
- (void)p_clickviewMask;
- (void)p_clickCloseTeenButton;
- (void).cxx_destruct;

@end
