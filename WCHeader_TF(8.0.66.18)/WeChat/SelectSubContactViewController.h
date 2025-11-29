@class UIColor, NSString, NSMutableSet, NSMutableArray, MMTableView;
@protocol SelectSubContactViewControllerDelegate;

@interface SelectSubContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMUIViewControllerOverrideOrientationMaskProtocol>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *selectedContacts;
@property (retain, nonatomic) NSMutableSet *selectedUsernames;
@property (weak, nonatomic) id<SelectSubContactViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *currentChatName;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) BOOL showsChatroomMembers;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) UIColor *brandColor;
@property (nonatomic) BOOL isInPageSheetMode;
@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)a0;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)a0;
- (id)initWithSelectedUsernames:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initUI;
- (id)navigationBarBackgroundColor;
- (id)viewControllerTitle;
- (long long)numberOfSessions;
- (id)contactAtIndex:(long long)a0;
- (void)onSelectedContactsChange;
- (void)onCancel;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isSessionSelected:(id)a0;
- (void)selectSessionContact:(id)a0;
- (void)deselectSessionContact:(id)a0;
- (BOOL)shouldShowChatroomMembers:(id)a0;
- (void).cxx_destruct;

@end
