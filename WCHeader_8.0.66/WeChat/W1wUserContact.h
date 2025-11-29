@class NSString;

@interface W1wUserContact : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatar;
@property (nonatomic) unsigned int avatarStyle;
@property (copy, nonatomic) NSString *userJumpInfo;
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
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_nickname;
+ (const void *)avatar;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_avatar;
+ (const void *)avatarStyle;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_avatarStyle;
+ (const void *)userJumpInfo;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_userJumpInfo;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (id)initWithUsername:(id)a0;
- (id)initWithUserInfo:(id)a0;
- (id)initWithMsgContactInfo:(id)a0;
- (id)asContact;
- (BOOL)useRoundAvatar;
- (void).cxx_destruct;

@end
