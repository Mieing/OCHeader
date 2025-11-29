@class CContact;
@protocol ChatRoomAdminSettingLogicDelegate;

@interface ChatRoomAdminSettingLogic : NSObject <IGroupMgrExt>

@property (weak, nonatomic) id<ChatRoomAdminSettingLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_oContact;

- (void)start;
- (void).cxx_destruct;

@end
