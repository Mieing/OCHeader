@class NSArray, NSString, FinderLiveTagInfo, MMTableView;
@protocol MMFinderLiveSelectTagViewControllerDelegate;

@interface MMFinderLiveSelectTagViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveSelectSubTagViewControllerDelegate>

@property (retain, nonatomic) NSArray *tagInfos;
@property (retain, nonatomic) FinderLiveTagInfo *lastSelectedTagInfo;
@property (retain, nonatomic) FinderLiveTagInfo *selectedTagInfo;
@property (nonatomic) BOOL postAfterSelect;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveSelectTagViewControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTagInfos:(id)a0 selectedTag:(id)a1 postAfterSelect:(BOOL)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)cellIdentifier;
- (void)onTapCancel;
- (void)onTapDone;
- (void)onFinderLiveSelectSubTagViewControllerSelectTagInfo:(id)a0;
- (void)onFinderLiveSelectSubTagViewControllerTapDone;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)getSeparatorView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
