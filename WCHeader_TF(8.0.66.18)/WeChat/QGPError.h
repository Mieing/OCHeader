@class NSString;

@interface QGPError : QGPReturn

@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsg;

+ (id)errorMsgForCode:(long long)a0;
+ (id)createErrorCode:(long long)a0 errorMsg:(id)a1;
+ (id)jsonParseError:(id)a0;
+ (id)unsupportFunctionError:(id)a0;
+ (id)unsupportFunctionErrorWithCommand:(id)a0;
+ (id)internalError:(id)a0;
+ (id)invaldParameterError:(id)a0;

- (void).cxx_destruct;

@end
