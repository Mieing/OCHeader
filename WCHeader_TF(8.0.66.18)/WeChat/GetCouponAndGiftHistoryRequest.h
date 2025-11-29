@class BaseRequest;

@interface GetCouponAndGiftHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long pageNum;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
