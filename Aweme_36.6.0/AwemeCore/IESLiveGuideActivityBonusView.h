@class UILabel, NSString, UIView;

@interface IESLiveGuideActivityBonusView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *labelText;

- (void)showOnSuperView:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)setupView;

@end
