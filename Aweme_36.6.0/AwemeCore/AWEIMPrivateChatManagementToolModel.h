@class NSString;

@interface AWEIMPrivateChatManagementToolModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrlLight;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long schemaType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
