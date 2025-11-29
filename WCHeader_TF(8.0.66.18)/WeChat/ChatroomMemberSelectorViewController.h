@class NSString, CContact;

@interface ChatroomMemberSelectorViewController : ContactSelectorViewController

@property (readonly, nonatomic) CContact *chatroomContact;
@property (copy, nonatomic) NSString *customizedTitle;

- (id)initWithChatroomContact:(id)a0 selectedContacts:(id)a1;
- (id)initWithChatroomContact:(id)a0 selectedContacts:(id)a1 filterHandler:(id /* block */)a2;
- (void)loadTitle;
- (void)viewDidLoad;
- (id)headerTitleInSection:(long long)a0;
- (void).cxx_destruct;

@end
