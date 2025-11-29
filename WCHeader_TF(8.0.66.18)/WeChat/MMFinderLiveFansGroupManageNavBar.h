@class UIButton, NSString, UIView;

@interface MMFinderLiveFansGroupManageNavBar : UIView

@property (retain, nonatomic) UIView *navLeftButton;
@property (retain, nonatomic) UIButton *navRightButton;
@property (copy, nonatomic) id /* block */ leftButtonActionCallback;
@property (copy, nonatomic) id /* block */ rightButtonActionCallback;
@property (retain, nonatomic) NSString *rightButtonLabel;
@property (nonatomic) BOOL rightButtonHidden;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)updateUI;
- (id)getCurrentLeftButton;
- (id)getCurrentRightView;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void).cxx_destruct;

@end
