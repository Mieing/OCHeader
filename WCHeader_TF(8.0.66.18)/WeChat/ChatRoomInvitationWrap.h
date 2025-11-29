@class NSString, ChatRoomInvitationDetail;

@interface ChatRoomInvitationWrap : NSObject <WCTTableCoding>

@property (nonatomic) long long svrId;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL hasApproved;
@property (retain, nonatomic) NSString *inviterUsrName;
@property (retain, nonatomic) NSString *memberList;
@property (retain, nonatomic) NSString *allMsgIdList;
@property (retain, nonatomic) ChatRoomInvitationDetail *invitationDetail;
@property (nonatomic) unsigned int joinScene;
@property (retain, nonatomic) NSString *qrCode;
@property (nonatomic) unsigned int qrCodeExpiredTime;
@property (nonatomic) unsigned int qrCodeDisabled;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)svrId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_svrId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_createTime;
+ (const void *)hasApproved;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_hasApproved;
+ (const void *)inviterUsrName;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_inviterUsrName;
+ (const void *)memberList;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_memberList;
+ (const void *)allMsgIdList;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_allMsgIdList;
+ (const void *)invitationDetail;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_invitationDetail;
+ (const void *)joinScene;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_joinScene;
+ (const void *)qrCode;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_qrCode;
+ (const void *)qrCodeExpiredTime;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_qrCodeExpiredTime;
+ (const void *)qrCodeDisabled;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_qrCodeDisabled;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_index_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;
+ (void)__wcdb_index_14:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;
+ (void)__wcdb_column_constraint_16:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;

- (id)init;
- (BOOL)isQRCodeEffective;
- (void).cxx_destruct;

@end
