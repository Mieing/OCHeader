@interface AWELivePrivilegeBaseInfo : AWEBaseApiModel

@property (nonatomic) long long paidLiveType;
@property (nonatomic) unsigned long long viewRight;
@property (nonatomic) long long delivery;

+ (id)JSONKeyPathsByPropertyKey;

@end
