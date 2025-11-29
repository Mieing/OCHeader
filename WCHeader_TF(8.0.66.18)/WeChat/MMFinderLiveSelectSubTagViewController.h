@class NSArray, NSString, FinderLiveTagInfo, MMTableView;
@protocol MMFinderLiveSelectSubTagViewControllerDelegate;

@interface MMFinderLiveSelectSubTagViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) NSArray *subTagInfos;
@property (retain, nonatomic) FinderLiveTagInfo *selectedTagInfo;
@property (nonatomic) BOOL postAfterSelect;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveSelectSubTagViewControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectedTagInfo:(id)a0 postAfterSelect:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)cellIdentifier;
- (void)onTapDone;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
