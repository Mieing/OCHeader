@class NSString, AWESeachSimpleSuggestManager, UILabel, UIPanGestureRecognizer, UITableView;
@protocol AWESearchHomeNewStyleInputViewProtocol;

@interface AWESeachSimpleSuggestViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, AWESeachSimpleSuggestCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) AWESeachSimpleSuggestManager *manager;
@property (nonatomic) BOOL isSuperAgentOpen;
@property (nonatomic) BOOL isRealWordsType;
@property (copy, nonatomic) id /* block */ clickComplementBlock;
@property (copy, nonatomic) id /* block */ suggestTapBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *fromGroupId;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL darkStyle;
@property (weak, nonatomic) id<AWESearchHomeNewStyleInputViewProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)wordsSource;
- (void)searchSimpleSuggestCell:(id)a0 didClickComplement:(id)a1;
- (void)fetchSimpleSuggest:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchSuperAgentSuggestWithCompletion:(id /* block */)a0;
- (void)trackTrendingShow:(BOOL)a0;
- (void)fetchSimpleSuggest:(BOOL)a0 realWordsType:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchSuperAgentSuggestWithRealWordsType:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackTrendingWordsShow:(id)a0 indexPath:(id)a1;
- (void)trackTrendingWordsClick:(id)a0 index:(long long)a1 actionType:(id)a2;
- (id)suggestWordBtm;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)didPan:(id)a0;

@end
