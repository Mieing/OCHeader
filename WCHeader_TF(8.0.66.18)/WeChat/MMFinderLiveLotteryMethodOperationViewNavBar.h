@class UIView, MMUILabel, MMUIButton;

@interface MMFinderLiveLotteryMethodOperationViewNavBar : UIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *sepelateLine;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ leftButtonActionCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithType:(unsigned long long)a0;
- (void)updateDataWithType;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutSeparateLine;
- (void)leftButtonAction;
- (void).cxx_destruct;

@end
