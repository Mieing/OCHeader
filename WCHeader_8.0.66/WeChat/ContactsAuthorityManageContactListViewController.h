@class NSString, ContactTagData;

@interface ContactsAuthorityManageContactListViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate>

@property (retain, nonatomic) ContactTagData *m_tagData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)initData;
- (id)getReloadContactDataList;
- (void)onSelectedOrCancelContact:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;

@end
