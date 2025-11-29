@class UITableView, AWEShareListPanel, NSString, NSMutableSet, UIView, AWESharePanelListNewIMCellModel;
@protocol AWESharePanelListItem, AWEIMShareContactListProtocol;

@interface AWESharePanelListIMSectionArchV2 : NSObject <AWEIMShareContactListDelegate, AWEIMShareAdditionTextViewUIDelegate, AWESharePanelListSection>

@property (retain, nonatomic) id<AWEIMShareContactListProtocol> shareContactList;
@property (retain, nonatomic) id<AWESharePanelListItem> item;
@property (retain, nonatomic) AWESharePanelListNewIMCellModel *cellModel;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *dismissView;
@property (weak, nonatomic) AWEShareListPanel *panel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *itemSets;

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (id)createAdditionTextAndAppendToViewHierarchyWithShareContactList:(id)a0;
- (void)shareContactList:(id)a0 additionTextViewDismissed:(id)a1;
- (id)shareContext;
- (void)textView:(id)a0 bottomViewDidShow:(BOOL)a1 keyboardHeight:(double)a2 additionTextViewNormalHeight:(double)a3 animateSheetHeight:(BOOL)a4;
- (void)textView:(id)a0 didChangeMinHeight:(double)a1 keyboardHeight:(double)a2;
- (void)trackDidClickEmojiBtn;
- (void)dismissViewDidTap:(id)a0;
- (id)tableView:(id)a0 cellForRow:(long long)a1;
- (id)cellModelForRow:(long long)a0;
- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (double)heightForRow:(long long)a0;
- (void)bind;

@end
