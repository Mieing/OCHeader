@class NSString, UIView, NSMutableArray, MMTableView;
@protocol WCFinderLiveRosterSelectDelegate;

@interface WCFinderLiveRosterSelectViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMPageSheetAdapterDelegate>

@property (retain, nonatomic) NSMutableArray *visibilityIdLists;
@property (retain, nonatomic) NSMutableArray *allVisibilityFileLists;
@property (retain, nonatomic) NSMutableArray *filteredVisibilityFileLists;
@property (nonatomic) long long visibilityMode;
@property (nonatomic) long long liveMode;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *tableViewFooter;
@property (nonatomic) double tableHeight;
@property (nonatomic) BOOL forceDarkMode;
@property (nonatomic) BOOL hasModifiedSelectedContacts;
@property (weak, nonatomic) id<WCFinderLiveRosterSelectDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *requiredFileIdLists;
@property (retain, nonatomic) NSMutableArray *disabledFileIdLists;
@property (nonatomic) BOOL enableConfirmAfterModify;
@property (nonatomic) BOOL isInPageSheetMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)updateDoneBtnEnabledInPageSheetMode;
- (void)setPageSheetAdapter:(id)a0;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onDoneInPageSheetMode:(id)a0;
- (void)onCancelInPageSheetMode:(id)a0;
- (void)pageSheetDidClose:(id)a0 closeType:(long long)a1;
- (id)initWithVisibilityFileLists:(id)a0 andChoosenIdLists:(id)a1 visibilityMode:(long long)a2 liveMode:(long long)a3 forceDarkMode:(BOOL)a4;
- (BOOL)isSelectEnabled:(id)a0;
- (BOOL)isSelected:(id)a0;
- (void)reloadData;
- (id)getColorProxy;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (id)doneBtnWording;
- (void)updateDoneBtn;
- (BOOL)isDoneBtnEnabled;
- (id)createInitLeftBarItem;
- (id)createInitLeftButton;
- (id)createInitRightBarItem;
- (void)initTableView;
- (void)layoutTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)cancelRosterSelect;
- (void)onTapCancel;
- (void)finishRosterSelect;
- (void)onTapDone;
- (void).cxx_destruct;

@end
