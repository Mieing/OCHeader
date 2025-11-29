@class UIView;

@interface CJPayMethodSeparateLineCell : UITableViewCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) UIView *separatorLineView;

+ (id)calHeight:(id)a0;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0;

@end
