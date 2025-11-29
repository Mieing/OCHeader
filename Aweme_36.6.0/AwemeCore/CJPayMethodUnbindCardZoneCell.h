@class UILabel, UIView;

@interface CJPayMethodUnbindCardZoneCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)calHeight:(id)a0;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0;

@end
