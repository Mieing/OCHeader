@class NSArray, ContactTagData;

@interface ContactTagNoTagSelectContactsViewController : MultiSelectContactsViewController

@property (retain, nonatomic) NSArray *arrContactNameList;
@property (retain, nonatomic) ContactTagData *m_contactTagData;

- (void)viewDidLoad;
- (void)updatePanelBtn;
- (void)onCancel:(id)a0;
- (BOOL)onShouldSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void).cxx_destruct;

@end
