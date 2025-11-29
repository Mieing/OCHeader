@class NSString, AWECoCreatorRoleInfoModel;

@interface AWECoCreatorSerachUserModel : AWEUserModel

@property (nonatomic) BOOL banBeCoCreator;
@property (nonatomic) BOOL canBeCoCreator;
@property (copy, nonatomic) NSString *banReason;
@property (nonatomic) unsigned long long verifyType;
@property (copy, nonatomic) NSString *verifyReason;
@property (retain, nonatomic) AWECoCreatorRoleInfoModel *roleInfo;

+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
