@class UILabel, NSString;

@interface CSJProgressHUD : UIView

@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (nonatomic) long long numberOfLine;
@property (copy, nonatomic) NSString *firstLineString;
@property (copy, nonatomic) NSString *secondLineString;

- (void)showInView:(id)a0 hiddenAfterDelay:(long long)a1;
- (void)relayoutLabel:(id)a0 string:(id)a1;
- (void)creatSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hidden;

@end
