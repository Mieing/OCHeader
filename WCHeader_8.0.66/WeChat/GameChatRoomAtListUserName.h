@class NSString;

@interface GameChatRoomAtListUserName : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *mainKey;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *chatRoomName;
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
+ (const void *)mainKey;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_mainKey;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_userName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_nickName;
+ (const void *)avatar;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_avatar;
+ (const void *)chatRoomName;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_chatRoomName;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;

- (void).cxx_destruct;

@end
