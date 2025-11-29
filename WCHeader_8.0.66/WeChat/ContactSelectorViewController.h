@class MMUILabel, NSArray, UIColor, NSString, UIView, OrderedDictionary, MMTableView;
@protocol ContactSelectorViewControllerDelegate;

@interface ContactSelectorViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>

@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) OrderedDictionary *selectedContacts;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *blankView;
@property (retain, nonatomic) MMUILabel *blankTipsLabel;
@property (weak, nonatomic) id<ContactSelectorViewControllerDelegate> delegate;
@property (nonatomic) BOOL isMultiplyMode;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) UIColor *brandColor;
@property (copy, nonatomic) NSString *blankTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContacts:(id)a0 selectedContacts:(id)a1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)updateSelectorViews;
- (void)layoutSelectorViews;
- (void)loadBarItems;
- (void)doneBarButtonItemClicked:(id)a0;
- (void)cancelBarButtonItemClicked:(id)a0;
- (id)headerTitleInSection:(long long)a0;
- (void)onCancel;
- (BOOL)isContactSelected:(id)a0;
- (BOOL)selectContact:(id)a0;
- (BOOL)deselectContact:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)updateSelectionCell:(id)a0 withContact:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void).cxx_destruct;

@end
