@class NSString, NSArray, MMPageSheetAdapter;
@protocol ContactAddDescriptionViewDelegate;

@interface ContactAddDescriptionViewController : NewRemarkViewController <ILinkEventExt, SendVerifyMsgBusinessCardImageDelegate> {
    BOOL m_firstLoadRightBarButton;
}

@property (nonatomic) BOOL hasFilledDescription;
@property (nonatomic) BOOL descSelectorIconExpo;
@property (nonatomic) BOOL descSelectorIconClick;
@property (nonatomic) BOOL descSelectorIconUsed;
@property (retain, nonatomic) NSString *helloMsg;
@property (weak, nonatomic) id<ContactAddDescriptionViewDelegate> addDescriptionDelegate;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (nonatomic) BOOL isInPageSheetMode;
@property (retain, nonatomic) NSArray *arrShowSectionType;
@property (retain, nonatomic) NSString *pageSheetViewTitle;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (double)getContentViewYInPageSheetMode;
- (double)getVisibleHeight;
- (double)getDescViewOriginHeight;
- (void)onDoneInPageSheetMode:(id)a0;
- (void)onCancelInPageSheetMode:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)initCardImgList;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (id)getTableHeaderView;
- (long long)getNumberSections;
- (unsigned int)getSectionType:(long long)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)onPerformEdit;
- (void)reportProfileRecommendInFinisDone;
- (double)getContentViewY;
- (void)DismissRemarkViewControllerAnimated;
- (id)getRightBarButtonItem;
- (void)makeDescriptionCell:(id)a0;
- (void)handleTextViewDidChangedRightBarButton;
- (BOOL)needSlideTextDescriptionBtn;
- (id)makeSlideTextDescriptionBtnView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)showSelectRemarkHalfScreen;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)a0;
- (void).cxx_destruct;

@end
