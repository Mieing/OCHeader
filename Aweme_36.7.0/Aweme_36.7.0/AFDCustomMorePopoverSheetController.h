@class AFDCustomMorePopoverSheetControllerContext, DUXPopover, NSObject, NSString, AWEPopoverActionSheet, NSMutableArray, UITableView;
@protocol AWEProfileMenuSectionViewModelProtocol, AFDFriendsListMoreSettingsDelegate;

@interface AFDCustomMorePopoverSheetController : NSObject <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, DUXPopoverCoverViewDelegate, AFDCustomMorePopoverSheetControllerProtocol>

@property (retain, nonatomic) AWEPopoverActionSheet *popoverView;
@property (retain, nonatomic) DUXPopover *duxPopover;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) AFDCustomMorePopoverSheetControllerContext *context;
@property (retain, nonatomic) NSObject<AWEProfileMenuSectionViewModelProtocol> *viewModel;
@property (nonatomic) double padding;
@property (nonatomic) double width;
@property (nonatomic) BOOL isNeedConfirmAlwaysReceivePush;
@property (nonatomic) BOOL isCloseFriendInit;
@property (nonatomic) BOOL hadChangedCloseFriendRelation;
@property (weak, nonatomic) id<AFDFriendsListMoreSettingsDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPopoverView;
- (void)p_adaptiveLowVersionSystemWithVC:(id)a0 withView:(id)a1;
- (id /* block */)confirmAlwaysReceivePush;
- (BOOL)__isSystemPushOn;
- (void)coverViewDidHit;
- (void)showCustomPopoverSheetViewWithContext:(id)a0 showForView:(id)a1 parentView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)constructItemArray;
- (BOOL)shouldSettingsShowIcon;
- (double)p_fixedContentHeight;
- (void)enterSendMessgaPage;
- (void)modifyAlias;
- (void)configCloseFriendCell:(id)a0 ForUserStatus:(long long)a1;
- (void)blockUser;
- (void)p_constructItemArrayWithTypeSections;
- (void)p_constructItemArray;
- (id)p_allowedItemTypes;
- (BOOL)canShowMarkCloseFriendCell;
- (BOOL)canShowTAIsFriendCell;
- (BOOL)canShowSendMessageCell;
- (BOOL)canShowHideMyPostCell;
- (BOOL)canShowHideHerPostCell;
- (BOOL)canShowNotShow24StoryCell;
- (BOOL)canShowNotSee24StoryCell;
- (BOOL)canShowRemoveFriendCell;
- (BOOL)canShowUnFollowCell;
- (void)p_constructMateListItemArray;
- (void)trackCloseFriendsShow;
- (void)__presentHalfScreenVC:(id)a0 withView:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)userModel;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
