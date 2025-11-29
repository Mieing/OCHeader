@class UILabel;

@interface AWEOPRealNameINCScopeCell : UITableViewCell

@property (retain, nonatomic) UILabel *dot;
@property (retain, nonatomic) UILabel *scopesField;

+ (struct CGSize { double x0; double x1; })heightForScopes:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateScopes:(id)a0;

@end
