@class UILabel, UIView;

@interface AWEACCSingleChoiceActionSheetCell : UITableViewCell

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;

- (void)configWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
