@class NSString;

@interface MultiTalkSessionItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int localID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *clientGroupID;
@property (retain, nonatomic) NSString *createUserName;
@property (nonatomic) unsigned int lastMessageID;
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
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_31:(void *)a0;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_32:(void *)a0;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_33:(void *)a0;
+ (id)swift_clientGroupID;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_34:(void *)a0;
+ (id)swift_createUserName;
+ (const void *)lastMessageID;
+ (const void *)__wcdb_synthesize_35:(void *)a0;
+ (id)swift_lastMessageID;
+ (void)__wcdb_column_constraint_36:(void *)a0;

- (BOOL)isSessionItemValid;
- (void).cxx_destruct;

@end
