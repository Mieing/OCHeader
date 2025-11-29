@class NSString, UIView;

@interface AWESharePanelListContainerCell : UITableViewCell <AWESharePanelListCell>

@property (retain, nonatomic) UIView *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)tableViewCell;

@end
