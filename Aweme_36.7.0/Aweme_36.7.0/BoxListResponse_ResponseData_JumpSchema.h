@class NSString;

@interface BoxListResponse_ResponseData_JumpSchema : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)descriptor;

@end
