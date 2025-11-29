@class MMTableView, NSString, UILabel, ChatBotDiscoverDataLogic;
@protocol ChatBotDiscoverDelegate;

@interface ChatBotDiscoverView : UIView <UITableViewDelegate, UITableViewDataSource, ChatBotDiscoverDataLogicDelegate>

@property (retain, nonatomic) UILabel *titleView;
@property (nonatomic) BOOL isDisplayed;
@property (nonatomic) double displayedOffsetY;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) ChatBotDiscoverDataLogic *dataLogic;
@property (weak, nonatomic) id<ChatBotDiscoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 curRoom:(id)a1;
- (void)initViews;
- (void)layoutTableView;
- (void)layoutTitleView;
- (void)displayWithOffsetY:(double)a0;
- (void)exitDisplayStatus;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)startNewVoIPWithContact:(id)a0;
- (void)makeCell:(id)a0 WithIndex:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reloadDataWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
