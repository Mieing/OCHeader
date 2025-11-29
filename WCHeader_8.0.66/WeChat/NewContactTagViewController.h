@class NSSet, NSMutableSet, NSString;
@protocol NewContactTagViewControllerDelegate;

@interface NewContactTagViewController : ContactTagViewController <NewContactTagTableViewDelegate> {
    unsigned int m_curEventID;
}

@property (retain, nonatomic) NSSet *originalAllTags;
@property (retain, nonatomic) NSMutableSet *editViewNewlyCreatedTags;
@property (retain, nonatomic) NSMutableSet *editViewAddedTags;
@property (retain, nonatomic) NSMutableSet *tableViewNewlyCreatedTags;
@property (retain, nonatomic) NSMutableSet *tableViewAddedTags;
@property (retain, nonatomic) NSString *reportSessionId;
@property (nonatomic) unsigned int fromSourceScene;
@property (nonatomic) unsigned int uiContactEnterScene;
@property (weak, nonatomic) id<NewContactTagViewControllerDelegate> m_delegate;

- (void)setupReportData;
- (void)reportClickCreateTagButton;
- (void)reportClickSearchInput;
- (void)reportClickTagItemWithIsSelected:(BOOL)a0;
- (id)getReportPageParams;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)onTextFieldMoved:(id)a0;
- (void)onEditTags;
- (BOOL)onTextFieldShouldBeginEditing:(id)a0;
- (void)onAddButtonFromTagTableView:(id)a0;
- (void)onDeleteButtonFromTagTableView:(id)a0;
- (void)onAddButtonFromTagEditView:(id)a0;
- (void)onDeleteButtonFromTagEditView:(id)a0;
- (void)onDidClickCreateTagButton;
- (BOOL)isNewlyCreatedTag:(id)a0;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)a0 tagName:(id)a1 isSelected:(BOOL)a2 tagTableView:(id)a3;
- (void).cxx_destruct;

@end
