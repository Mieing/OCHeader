@interface WCTogetherBaseCell : UITableViewCell

@property (retain, nonatomic) id viewItem;

+ (id)cellIdentifier;
+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (void)_observeViewModel:(id)a0;
- (void)_unobserveViewModel:(id)a0;
- (void)_observedValueDidChangeForKeyPath:(id)a0;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (void)updateAllValues;
- (void)_willUnsetOldViewModel:(id)a0;
- (void)_didSetNewViewModel:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
