@class BaseRequest, NSString, UpdateWxaEvaluateRequest_EvaluateInfo;

@interface UpdateWxaEvaluateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) int operType;
@property (retain, nonatomic) UpdateWxaEvaluateRequest_EvaluateInfo *evaluateInfo;

+ (void)initialize;

@end
