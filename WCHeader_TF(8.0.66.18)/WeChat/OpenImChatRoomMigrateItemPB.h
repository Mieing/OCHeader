@class NSString;

@interface OpenImChatRoomMigrateItemPB : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsOpenIMChatRoomUserName;
@property (retain, nonatomic) NSString *m_nsAssociateChatRoomUserName;
@property (nonatomic) BOOL m_bIsHadMigrated;
@property (nonatomic) BOOL m_bIsSendInsertWarningSystemMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsOpenIMChatRoomUserName;
+ (void)PBArrayAdd_m_nsAssociateChatRoomUserName;
+ (void)PBArrayAdd_m_bIsHadMigrated;
+ (void)PBArrayAdd_m_bIsSendInsertWarningSystemMessage;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
