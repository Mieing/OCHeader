@class NSArray, AWEFormatAISearchCardHeaderView, NSString, AWEFormatAISearchCardViewModel, UITableView;

@interface AWEFormatAISearchCardView : AWESearchCachalotBaseCardView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEFormatAISearchCardHeaderView *headerView;
@property (retain, nonatomic) NSArray *avatarInfos;
@property (retain, nonatomic) AWEFormatAISearchCardViewModel *cardViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)componentWillDisplay;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
