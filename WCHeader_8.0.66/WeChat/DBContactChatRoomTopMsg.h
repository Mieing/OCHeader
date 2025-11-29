@class NSString;

@interface DBContactChatRoomTopMsg : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int topId;
@property (retain, nonatomic) NSString *opUserName;
@property (nonatomic) unsigned long long msgSvrID;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgSummary;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *msgUserName;
@property (nonatomic) unsigned int isRevoke;
@property (nonatomic) unsigned int exposureTime;
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
+ (const void *)__wcdb_synthesize_37:(void *)a0;
+ (id)swift_userName;
+ (const void *)topId;
+ (const void *)__wcdb_synthesize_38:(void *)a0;
+ (id)swift_topId;
+ (const void *)opUserName;
+ (const void *)__wcdb_synthesize_39:(void *)a0;
+ (id)swift_opUserName;
+ (const void *)msgSvrID;
+ (const void *)__wcdb_synthesize_40:(void *)a0;
+ (id)swift_msgSvrID;
+ (const void *)msgType;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (id)swift_msgType;
+ (const void *)msgSummary;
+ (const void *)__wcdb_synthesize_42:(void *)a0;
+ (id)swift_msgSummary;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_status;
+ (const void *)msgUserName;
+ (const void *)__wcdb_synthesize_44:(void *)a0;
+ (id)swift_msgUserName;
+ (const void *)isRevoke;
+ (const void *)__wcdb_synthesize_45:(void *)a0;
+ (id)swift_isRevoke;
+ (const void *)exposureTime;
+ (const void *)__wcdb_synthesize_46:(void *)a0;
+ (id)swift_exposureTime;
+ (void)__wcdb_column_constraint_47:(void *)a0;
+ (void)__wcdb_column_constraint_48:(void *)a0;
+ (void)__wcdb_column_constraint_49:(void *)a0;
+ (void)__wcdb_index_50:(void *)a0;
+ (void)__wcdb_index_51:(void *)a0;
+ (void)__wcdb_table_constraint_52:(void *)a0;
+ (void)__wcdb_table_constraint_53:(void *)a0;

- (void).cxx_destruct;

@end
