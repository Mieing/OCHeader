@class UINavigationController, WCSelectorView, NSString, WCMomentsPostReportSession, UIView, NSMutableArray, NSMutableDictionary;
@protocol SelectorControllerDelegate, ContactsSelectorControllerDelegate;

@interface ContactsSelectorController : MMObject <MultiSelectContactsViewControllerDelegate, SessionSelectControllerDelegate, WCSelectorViewDelegate, WCSelectorViewDataSource, WCContactItemDeleteViewDelegate> {
    NSMutableDictionary *_dicContactItemDeleteView;
}

@property (nonatomic) BOOL togetherEnabled;
@property (retain, nonatomic) NSMutableArray *arrFilteredContacts;
@property (retain, nonatomic) NSMutableArray *arrContacts;
@property (retain, nonatomic) WCSelectorView *selectorView;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) NSString *subtitle;
@property (weak, nonatomic) id<SelectorControllerDelegate> delegate;
@property (weak, nonatomic) id<ContactsSelectorControllerDelegate> selectDelegate;
@property (nonatomic) BOOL hasSelectCountLimit;
@property (nonatomic) unsigned int selectCountLimit;
@property (copy, nonatomic) NSString *selectContactVCTitleText;
@property (copy, nonatomic) NSString *headerBarText;
@property (retain, nonatomic) UIView *customContactListFooterView;
@property (retain, nonatomic) NSString *noResultTipText;
@property (nonatomic) long long contactsSelectorType;
@property (retain, nonatomic) WCMomentsPostReportSession *postReportSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeContact:(id)a0;
- (id)getViewController;
- (id)init;
- (void)addContact;
- (void)showMutiSelectContactViewController;
- (void)commonSetupMutiSelectContactViewController:(id)a0;
- (void)setupMutiSelectContactViewControllerInSessionSelectController:(id)a0;
- (void)showSessionSelectController;
- (void)showTogetherGuideViewIfNeededInView:(id)a0;
- (void)didSelectContacts:(id)a0;
- (void)didCancelSelectingContacts;
- (unsigned long long)numbersOfViews;
- (id)viewAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForViews;
- (BOOL)shouldShowDeleteView;
- (void)onClickWholeView;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onMultiSelectContactReturnForSns:(id)a0;
- (void)onMultiSelectContactCancelForSns;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void)onSessionSelectControllerDidPresent:(id)a0;
- (void)onSessionSelectController:(id)a0 prepareMultiSelectContactsViewController:(id)a1;
- (id)sessionSelectController:(id)a0 alertMessageForExceedingMaxSelectionCount:(unsigned long long)a1;
- (void)onClickHeadImage:(id)a0 withContact:(id)a1;
- (void)onClickDeleteButton:(id)a0 withContact:(id)a1;
- (void).cxx_destruct;

@end
