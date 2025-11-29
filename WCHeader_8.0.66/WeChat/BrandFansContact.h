@class NSString, BrandFansContactExtendInfo;

@interface BrandFansContact : NSObject <BrandFansProfileItem, WCTTableCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *openID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *avatarImageURL;
@property (copy, nonatomic) NSString *bizuin;
@property (retain, nonatomic) BrandFansContactExtendInfo *extendInfo;
@property (nonatomic) unsigned int headType;
@property (nonatomic) unsigned int identityType;
@property (retain, nonatomic) NSString *identityName;
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
+ (const void *)openID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_openID;
+ (const void *)nickname;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_nickname;
+ (const void *)avatarImageURL;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_avatarImageURL;
+ (const void *)bizuin;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_bizuin;
+ (const void *)extendInfo;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_extendInfo;
+ (const void *)headType;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_headType;
+ (const void *)identityType;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_identityType;
+ (const void *)identityName;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_identityName;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (id)profileAvatarImageURL;
- (id)profileDescription;
- (BOOL)profileInBlacklist;
- (id)profileNickname;
- (id)profileSignature;
- (id)profileUserID;
- (unsigned int)profileUserType;
- (id)profileInteractiveInfo;
- (void)updateWithExtendInfo:(id)a0;
- (BOOL)profileUseRoundAvatar;
- (id)profileFriendNickname;
- (id)profileBizUin;
- (id)initWithUserAttr:(id)a0 bizuin:(id)a1;
- (id)initWithOpenID:(id)a0 bizuin:(id)a1;
- (void)updateWithUserInfo:(id)a0;
- (id)contactDescription;
- (id)asContact;
- (id)openIDForCGI;
- (BOOL)useRoundAvatar;
- (void).cxx_destruct;

@end
