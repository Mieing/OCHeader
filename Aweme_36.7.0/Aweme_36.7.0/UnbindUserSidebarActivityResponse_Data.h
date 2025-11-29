@class NSString;

@interface UnbindUserSidebarActivityResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) int actionTrigger;

+ (id)descriptor;

@end
