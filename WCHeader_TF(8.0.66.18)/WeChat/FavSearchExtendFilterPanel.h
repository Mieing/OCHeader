@class NSString, NSArray, NSMutableArray, MMTableView;
@protocol FavSearchExtendFilterPanelDelegate;

@interface FavSearchExtendFilterPanel : MMUIView <UITableViewDelegate, UITableViewDataSource, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt> {
    MMTableView *m_tableView;
    NSMutableArray *m_tags;
    NSMutableArray *m_selectedTags;
    NSString *m_tagTitle;
    NSArray *m_types;
    NSString *m_selectedType;
    NSString *m_typeTitle;
    double m_rowHeight;
    double m_titleHeight;
    NSString *m_editingTag;
}

@property (weak, nonatomic) id<FavSearchExtendFilterPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0;
- (void)updateWithWidth:(double)a0;
- (void)initTableView;
- (void)updateContentHeight;
- (void)setTags:(id)a0 withTitle:(id)a1;
- (void)setTag:(id)a0 selected:(BOOL)a1;
- (void)selectType:(id)a0;
- (void)setTypes:(id)a0 withTitle:(id)a1;
- (void)cancelType;
- (void)clearSelection;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tryAddLongPressGesture:(id)a0;
- (id)genBtnWithTitle:(id)a0;
- (void)updateBtn:(id)a0 selected:(BOOL)a1;
- (id)getButtonTitle:(id)a0;
- (void)onClickBtn:(id)a0;
- (void)onLongPressBtn:(id)a0;
- (void)showMenuOnBtn:(id)a0;
- (void)clearLongPressBtnState;
- (BOOL)canBecomeFirstResponder;
- (void)renameTag:(id)a0;
- (void)deleteTag:(id)a0;
- (void)onHidePanel:(id)a0;
- (void)onMenuControllerDidHide;
- (void)onTagNameEditViewControllerRetWithTagName:(id)a0;
- (void)updateTag:(id)a0 to:(id)a1;
- (void)updateEditingTagTo:(id)a0;
- (void).cxx_destruct;

@end
