@class NSString, CContact;

@interface WCFinderGroupCreateTipsViewController : MMUIViewController <WCFinderCreateGroupViewControllerDelegate>

@property (retain, nonatomic) CContact *chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatRoomContact:(id)a0;
- (void)viewDidLoad;
- (id)subTipsViewWithTitle:(id)a0 desc:(id)a1;
- (id)navigationBarBackgroundColor;
- (void)createGroupContact;
- (void)clickBindMasterAction;
- (void)createUserClosed;
- (void)createUserFinished:(id)a0;
- (void).cxx_destruct;

@end
