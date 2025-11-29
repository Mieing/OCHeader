@class NSString, NSMutableArray;
@protocol SelectContactFromChatRoomViewControllerDelegate;

@interface SelectContactFromChatRoomViewController : MultiSelectContactsViewController <RoomContactSelectDelegate, SelectContactFromChatRoomSelectListViewControllerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) NSMutableArray *arrSelectContactFromChatRoom;
@property (weak, nonatomic) id<SelectContactFromChatRoomViewControllerDelegate> m_selectContactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)updatePanelBtn;
- (void)openChatRoomContactList:(id)a0;
- (void)didSearchControllerSelectContact:(id)a0 indexPath:(id)a1;
- (Class)getContactSelectViewClass;
- (void)modifySearchController:(id)a0;
- (void)onSelectedContactResult:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;

@end
