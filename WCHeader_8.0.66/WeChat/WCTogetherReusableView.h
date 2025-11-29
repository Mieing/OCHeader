@interface WCTogetherReusableView : UITableViewHeaderFooterView

@property (retain, nonatomic) id viewSection;

+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)a0 inTableView:(id)a1;

- (void)_observeViewModel:(id)a0;
- (void)_unobserveViewModel:(id)a0;
- (void)_observedValueDidChangeForKeyPath:(id)a0;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (void)updateAllValues;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
