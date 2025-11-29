@class NSString, WCGameLifeProfileJumpInfo;

@interface GameLifeContact : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatarUrl;
@property (nonatomic) unsigned int sex;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) WCGameLifeProfileJumpInfo *jumpInfo;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) BOOL isValid;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)accountType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_accountType;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_nickname;
+ (const void *)avatarUrl;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_avatarUrl;
+ (const void *)sex;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_sex;
+ (const void *)tag;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_tag;
+ (const void *)jumpInfo;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_jumpInfo;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (id)init;
- (id)initWithChatUserInfo:(id)a0;
- (id)initWithUsername:(id)a0;
- (id)getJumpUrl;
- (id)toCContact;
- (void).cxx_destruct;

@end
