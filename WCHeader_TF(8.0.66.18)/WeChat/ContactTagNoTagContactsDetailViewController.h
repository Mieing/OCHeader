@class NSString, NSMutableString, ContactTagNoTagSelectContactsViewController, ContactTagNoTagBatchSetTagViewController;
@protocol ContactTagNoTagContactsDetailViewControllerDelegate;

@interface ContactTagNoTagContactsDetailViewController : ContactTagNewDetailViewController <MultiSelectContactsViewControllerDelegate, ContactTagNoTagBatchSetTagViewControllerDelegate> {
    NSMutableString *m_batchAddLabelFriOpStr;
    ContactTagNoTagSelectContactsViewController *m_noTagContactsSelectContactsVC;
    ContactTagNoTagBatchSetTagViewController *m_noTagContactsBatchSetTagVC;
}

@property (weak, nonatomic) id<ContactTagNoTagContactsDetailViewControllerDelegate> m_contactTagNoTagDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initViewControllerWithContactTagData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)updateNavigationTitleAndBarButton;
- (id)getEmptyViewStr;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initBarButton;
- (void)onClickBackBarButton;
- (void)doBatchSettings;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onNoTagBatchSetTagSuccess;
- (void)reportNoTagContactSetTag;
- (void).cxx_destruct;

@end
