@class NSString, BaseResponse;

@interface GetProductDiscountResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *discountDetail;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
