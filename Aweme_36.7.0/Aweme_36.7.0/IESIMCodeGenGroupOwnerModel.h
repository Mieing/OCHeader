@class NSString;

@interface IESIMCodeGenGroupOwnerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *ownerName;
@property (copy, nonatomic) NSString *ownerAvatar;
@property (copy, nonatomic) NSString *secOwnerId;
@property (nonatomic) long long ownerId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
