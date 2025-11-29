@class NSString;

@interface HTSLiveActUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
