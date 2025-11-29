@interface IESLiveFunctionSquareBaseTableViewCell : UITableViewCell

+ (double)heightOfDefault;
+ (id)loadCellFromCode4TableView:(id)a0 indexPath:(id)a1;
+ (id)loadCellFromCodeWithReuseIdentifier:(id)a0;
+ (id)loadCellFromCode4TableView:(id)a0 reuseIdentifier:(id)a1 indexPath:(id)a2;
+ (id)loadCellFromCode;
+ (id)reuseIdentifier;
+ (Class)cellClass;

- (void)initializeOnCellLoaded;
- (void)initializeOnCellLoadedPre;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
