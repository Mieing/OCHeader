@class NSString, BaseResponse;

@interface GetInteractionADResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *traceId;
@property (nonatomic) int isPlayExpression;
@property (nonatomic) unsigned int interval;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *msg;

+ (void)initialize;

@end
