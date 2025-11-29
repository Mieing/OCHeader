@class NSString, NSArray, NSDictionary;

@interface AFDLocalIMBizInfoModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long aiSingleChatSwitch;
@property (nonatomic) BOOL hasEAccountRole;
@property (nonatomic) BOOL imageSendExempt;
@property (copy, nonatomic) NSString *roleTagStr;
@property (copy, nonatomic) NSArray *roleIDs;
@property (nonatomic) unsigned long long mtShareable;
@property (copy, nonatomic) NSString *aiCloneSecUid;
@property (copy, nonatomic) NSString *aiCloneBelongToSecUid;
@property (nonatomic) long long imActiveness;
@property (retain, nonatomic) NSDictionary *webcastSPInfo;
@property (copy, nonatomic) NSString *aiSignature;
@property (copy, nonatomic) NSString *formatOwnerNickName;
@property (retain, nonatomic) NSDictionary *avatarFormat;
@property (nonatomic) BOOL formatIsAssistant;
@property (nonatomic) long long isIMOverseaUser;
@property (copy, nonatomic) NSDictionary *botExtraInfo;
@property (nonatomic) long long blessEndTime;

+ (const void *)modifyTime;
+ (const void *)formatIsAssistant;
+ (const void *)roleIDs;
+ (const void *)aiCloneBelongToSecUid;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)imageSendExempt;
+ (const void *)formatOwnerNickName;
+ (const void *)roleTagStr;
+ (const void *)aiCloneSecUid;
+ (const void *)isIMOverseaUser;
+ (const void *)syncTime;
+ (const void *)aiSingleChatSwitch;
+ (const void *)hasEAccountRole;
+ (const void *)imActiveness;
+ (const void *)aiSignature;
+ (const void *)mtShareable;
+ (const void *)botExtraInfo;
+ (const void *)blessEndTime;
+ (const void *)webcastSPInfo;
+ (const void *)avatarFormat;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithIMUser:(id)a0;
- (void).cxx_destruct;

@end
