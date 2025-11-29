@class UITableView, NSArray, NSString, UIScrollView, NSMutableArray, UIButton;

@interface AWELongPressPanelAdsActionLikeView : UIView <UITableViewDelegate, UITableViewDataSource, AWELongPressPanelAdsActionFeedbackProtocol>

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSArray *likeReasons;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIScrollView *scrollView;

+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;

- (void)sendButtonClick;
- (id)positiveFilterWordsWithAweme:(id)a0;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (void)cancleButtonClick;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpTableView;
- (void)setUpUI;

@end
