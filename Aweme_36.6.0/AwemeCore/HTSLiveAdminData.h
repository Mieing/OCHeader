@class NSString;

@interface HTSLiveAdminData : IESLivePBBaseMessage

@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openId;

+ (id)descriptor;

@end
