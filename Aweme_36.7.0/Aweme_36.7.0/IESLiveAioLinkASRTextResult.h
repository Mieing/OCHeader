@class NSString;

@interface IESLiveAioLinkASRTextResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *reqId;

+ (id)descriptor;

@end
