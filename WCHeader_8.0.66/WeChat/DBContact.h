@class NSString, NSData;

@interface DBContact : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int LastChatTime;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *mobile;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *fullPinYin;
@property (retain, nonatomic) NSData *extent;
@property (retain, nonatomic) NSString *image;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *draft;
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
+ (const void *)version;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_version;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_userName;
+ (const void *)nickName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_nickName;
+ (const void *)uin;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_uin;
+ (const void *)email;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_email;
+ (const void *)mobile;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_mobile;
+ (const void *)sex;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_sex;
+ (const void *)fullPinYin;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_fullPinYin;
+ (const void *)extent;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_extent;
+ (const void *)image;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_image;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_type;
+ (const void *)LastChatTime;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_LastChatTime;
+ (const void *)draft;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_draft;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_14:(void *)a0;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (void)__wcdb_column_constraint_16:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_18:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;

- (void).cxx_destruct;

@end
