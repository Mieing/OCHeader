@class FavTagEditView, NSString, FavTagTableView, FavTagHintView, UILabel, NSMutableArray, MMTableView;

@interface TagViewController : MMUIViewController <FavTagEditViewDelegate, ContactTagNameEditViewControllerDelegate, MMMenuControllerExt> {
    MMTableView *m_tableView;
    FavTagEditView *m_tagEditView;
    FavTagTableView *m_tagTableView;
    FavTagHintView *m_tagHintView;
    UILabel *m_warnLabel;
    NSString *m_editingTag;
}

@property (retain, nonatomic) NSString *m_editPlaceholer;
@property (retain, nonatomic) NSString *m_eduPlaceholer;
@property (retain, nonatomic) NSMutableArray *m_currentTags;
@property (retain, nonatomic) NSMutableArray *m_allTags;
@property (retain, nonatomic) NSString *m_allTagTitle;
@property (nonatomic) BOOL m_bShowAllTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genImage:(unsigned long long)a0 forButton:(id)a1 cornerRadius:(double)a2 isHighLight:(BOOL)a3;
+ (id)genImage:(unsigned long long)a0 forButton:(id)a1 cornerRadius:(double)a2 isHighLight:(BOOL)a3 isDarkMode:(BOOL)a4;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePresented:(BOOL)a0;
- (id)rightBarButtonTitle;
- (void)initLeftBtn;
- (void)initRightBtn;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)initTagView;
- (void)updateAllTags:(id)a0;
- (void)updateCurrentTags:(id)a0;
- (void)editDone:(id)a0;
- (void)editCancel;
- (void)manageTags;
- (void)OnCancel;
- (void)onEditDone;
- (void)tapKeyBoardNextButton;
- (void)resignKeyBoard;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)cancelEditingAndExit;
- (void)changeDisplayView:(BOOL)a0;
- (void)onTextFieldMoved:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)onAddButton:(id)a0;
- (void)onDeleteButton:(id)a0;
- (void)onTagHighLight:(id)a0;
- (void)onTagUnHighLight:(id)a0;
- (void)cleanTextField:(id)a0;
- (void)hideKeyboardOnScroll:(id)a0;
- (void)onLongPressTagBtn:(id)a0;
- (void)showMenuOnBtn:(id)a0;
- (void)clearLongPressBtnState;
- (void)renameTag:(id)a0;
- (void)deleteTag:(id)a0;
- (void)onTagNameEditViewControllerRetWithTagName:(id)a0;
- (void)updateTag:(id)a0 to:(id)a1;
- (void)updateEditingTagTo:(id)a0;
- (void)onMenuControllerDidHide;
- (void).cxx_destruct;

@end
