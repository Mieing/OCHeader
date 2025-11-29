@class NSString;

@interface MultiTalkMessageItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int localID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *clientGroupID;
@property (retain, nonatomic) NSString *createUserName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int messageType;
@property (retain, nonatomic) NSString *messageContent;
@property (nonatomic) unsigned int hasGenWCMessage;
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
+ (const void *)__wcdb_synthesize_22:(void *)a0;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_23:(void *)a0;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_24:(void *)a0;
+ (id)swift_clientGroupID;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_25:(void *)a0;
+ (id)swift_createUserName;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_26:(void *)a0;
+ (id)swift_createTime;
+ (const void *)messageType;
+ (const void *)__wcdb_synthesize_27:(void *)a0;
+ (id)swift_messageType;
+ (const void *)messageContent;
+ (const void *)__wcdb_synthesize_28:(void *)a0;
+ (id)swift_messageContent;
+ (const void *)hasGenWCMessage;
+ (const void *)__wcdb_synthesize_29:(void *)a0;
+ (id)swift_hasGenWCMessage;
+ (void)__wcdb_column_constraint_30:(void *)a0;

- (BOOL)isMessageItemValid;
- (void).cxx_destruct;

@end
