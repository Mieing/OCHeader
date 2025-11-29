@class UILabel;

@interface AWELiveVisibleScopeListHeaderView : UITableViewHeaderFooterView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)headerHeight;
+ (id)identifier;

- (void)configType:(unsigned long long)a0 awemeID:(id)a1 count:(long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithReuseIdentifier:(id)a0;

@end
