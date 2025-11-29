@class NSArray, NSDictionary, NSString, UITableView;

@interface AWEIMEmojiStoreSearchResultSeriesEmojiCollectionViewCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, AWEIMEmojiStoreTableViewCellDelegate>

@property (retain, nonatomic) UITableView *seriesEmojiTableView;
@property (copy, nonatomic) NSArray *seriesEmojiDataSource;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emojiStoreCell:(id)a0 didClickAddPackage:(id)a1;
- (void)renderWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
