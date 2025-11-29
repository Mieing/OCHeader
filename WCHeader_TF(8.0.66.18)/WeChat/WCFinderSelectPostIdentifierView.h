@class UIButton, NSString, NSArray, WCFinderCustomPanelSheet, UITableView;

@interface WCFinderSelectPostIdentifierView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderCreateUserViewControllerDelegate, WCFinderUserPrepareExt>

@property (weak, nonatomic) WCFinderCustomPanelSheet *sheet;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSString *selectedUsername;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *optionalUsernames;
@property (nonatomic) int refreshPrepareState;
@property (nonatomic) BOOL showOnlyOptionalUsernames;
@property (copy, nonatomic) id /* block */ updateFrameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 optionalUsernames:(id)a1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)createTableView;
- (void)loadItems;
- (void)_loadOnlyOptionUserContacts;
- (void)_loadAllSelfContact;
- (BOOL)canCreateFinderContact;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)itemHeight;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onSelectedItem:(id)a0;
- (void)seletContatWithItem:(id)a0 complection:(id /* block */)a1;
- (void)onClickCreateIdentify;
- (void)closeSheet;
- (void)didMoveToWindow;
- (void)refetchUserPrepare;
- (void)createUserFinished:(id)a0;
- (void)cancelCreateUser;
- (void)createUserFailed;
- (void)finderUserPrepareUpdate:(id)a0;
- (void).cxx_destruct;

@end
