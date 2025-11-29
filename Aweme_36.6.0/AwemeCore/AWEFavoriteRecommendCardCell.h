@class AWEFavoriteRecommendDataController, NSString, UIView, UITableView;

@interface AWEFavoriteRecommendCardCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *backgroundContentView;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UITableView *recommendTableView;
@property (copy, nonatomic) id /* block */ closeBtnClickBlock;
@property (retain, nonatomic) AWEFavoriteRecommendDataController *favoriteRecommendDataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)clickCreateButton:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
