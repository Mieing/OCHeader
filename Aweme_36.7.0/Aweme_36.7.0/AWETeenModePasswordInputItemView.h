@class UILabel, UIColor, UIView;

@interface AWETeenModePasswordInputItemView : UIView

@property (nonatomic) unsigned long long borderType;
@property (nonatomic) unsigned long long inputType;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *boxView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UILabel *numberView;
@property (retain, nonatomic) UIColor *tintColor;

- (id)initWithBorderType:(unsigned long long)a0 inputType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setNumber:(id)a0;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)setupSubviews;

@end
