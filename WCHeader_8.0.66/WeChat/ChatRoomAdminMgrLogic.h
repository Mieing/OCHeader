@class NSArray, CContact;
@protocol ChatRoomAdminMgrLogicDelegate;

@interface ChatRoomAdminMgrLogic : NSObject <IGroupMgrExt>

@property (weak, nonatomic) id<ChatRoomAdminMgrLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (retain, nonatomic) NSArray *m_arrMemberList;

- (id)init;
- (void)reLoadData;
- (void).cxx_destruct;

@end
