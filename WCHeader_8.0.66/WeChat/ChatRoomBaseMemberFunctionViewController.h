@class NSString;

@interface ChatRoomBaseMemberFunctionViewController : MMAcceptAgreementBaseViewController <contactInfoDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)isShowDeleteButton;
- (id)getChatRoomContact;
- (double)getCellMargin;
- (double)getCellTitleLeftMargin;
- (double)getCellAddImageViewLeftMargin;
- (double)getCellRemoveButtonRightMargin;
- (double)getAddImageSizeLength;
- (void)reloadTableDataWithArrMemberConatct:(id)a0 isShowAddCell:(BOOL)a1 andTitle:(id)a2 andContent:(id)a3;
- (void)makeChatRoomMemberFunctionCell:(id)a0 CellInfo:(id)a1;
- (void)makeChatRoomMemberFunctionAddCell:(id)a0 CellInfo:(id)a1;
- (id)genHeaderViewWithTitle:(id)a0 andContent:(id)a1;
- (void)openContactInfo:(id)a0;
- (void)didFunctionAddMember;
- (void)didRemoveOperateButton:(id)a0;
- (void)didClickLeftCloseBarButton;
- (id)navigationBarBackgroundColor;

@end
