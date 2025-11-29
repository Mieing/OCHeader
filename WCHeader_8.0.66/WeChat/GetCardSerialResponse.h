@class NSMutableArray, BaseResponse;

@interface GetCardSerialResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *codes;
@property (nonatomic) unsigned int requestTime;
@property (nonatomic) unsigned int requestCount;
@property (nonatomic) unsigned int refreshInterval;

+ (void)initialize;

@end
