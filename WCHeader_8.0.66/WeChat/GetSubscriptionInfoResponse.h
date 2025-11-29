@class NSMutableArray, BaseResponse;

@interface GetSubscriptionInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appleProductIds;

+ (void)initialize;

@end
