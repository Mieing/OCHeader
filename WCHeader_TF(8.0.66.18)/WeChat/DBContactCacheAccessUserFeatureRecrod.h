@class NSString;

@interface DBContactCacheAccessUserFeatureRecrod : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int operateTime;
@property (nonatomic) unsigned int groupLastActiveTimeCount;
@property (nonatomic) unsigned int groupMySelfLastActiveTimeCount;
@property (nonatomic) unsigned int groupMemberCount;
@property (nonatomic) unsigned int groupUnReadMsgCount;
@property (nonatomic) unsigned int groupFriendsCount;
@property (nonatomic) unsigned int myRecentMsgCount;
@property (nonatomic) unsigned int isMute;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_operateTime;
+ (const void *)groupLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_groupLastActiveTimeCount;
+ (const void *)groupMySelfLastActiveTimeCount;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_groupMySelfLastActiveTimeCount;
+ (const void *)groupMemberCount;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_groupMemberCount;
+ (const void *)groupUnReadMsgCount;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_groupUnReadMsgCount;
+ (const void *)groupFriendsCount;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_groupFriendsCount;
+ (const void *)myRecentMsgCount;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_myRecentMsgCount;
+ (const void *)isMute;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_isMute;
+ (void)__wcdb_table_constraint_9:(void *)a0;
+ (void)__wcdb_table_constraint_10:(void *)a0;

- (void).cxx_destruct;

@end
