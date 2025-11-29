@class NSString;

@interface BindUserSidebarActivityResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) int actionTrigger;

+ (id)descriptor;

@end
