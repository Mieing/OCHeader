@class NSString, BaseResponse;

@interface GenBizIapPrepayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end
