@class UIColor, UIVisualEffectView, UILabel, UIView;

@interface IESLiveProgressHUD : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) UIView *topSpacer;
@property (retain, nonatomic) UIView *bottomSpacer;
@property (nonatomic) double padding;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) double margin;
@property (nonatomic) double cornerRadius;

+ (id)HUDForView:(id)a0;
+ (id)showHUDAddedTo:(id)a0;
+ (BOOL)hideHUDForView:(id)a0;
+ (void)hideHUDForView:(id)a0 afterDelay:(double)a1;

- (void)hideAfterDelay:(double)a0;
- (void)updatePaddingConstraints:(id)a0 With:(id)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)commonInit;
- (void)hide;
- (void)setupViews;

@end
