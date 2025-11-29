@class NSString;

@interface HTSLiveLifeGrouponInfo : IESLivePBBaseMessage

@property (nonatomic) long long permissionStatus;
@property (nonatomic) long long aggCardId;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *dynamicURL;
@property (copy, nonatomic) NSString *lifeLivePackComponentConfig;

+ (id)descriptor;

@end
