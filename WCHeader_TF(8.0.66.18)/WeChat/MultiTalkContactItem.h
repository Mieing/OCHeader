@class NSString, MultiTalkMemberList;

@interface MultiTalkContactItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int localID;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *clientGroupID;
@property (retain, nonatomic) NSString *wxGroupID;
@property (nonatomic) int routID;
@property (retain, nonatomic) MultiTalkMemberList *contactMemberList;
@property (retain, nonatomic) NSString *createUserName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int memberListCount;
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
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_localID;
+ (const void *)groupID;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_groupID;
+ (const void *)clientGroupID;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_clientGroupID;
+ (const void *)wxGroupID;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (id)swift_wxGroupID;
+ (const void *)routID;
+ (const void *)__wcdb_synthesize_16:(void *)a0;
+ (id)swift_routID;
+ (const void *)contactMemberList;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (id)swift_contactMemberList;
+ (const void *)createUserName;
+ (const void *)__wcdb_synthesize_18:(void *)a0;
+ (id)swift_createUserName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (id)swift_nickName;
+ (const void *)memberListCount;
+ (const void *)__wcdb_synthesize_20:(void *)a0;
+ (id)swift_memberListCount;
+ (void)__wcdb_column_constraint_21:(void *)a0;

@end
