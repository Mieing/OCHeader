@class NSString, BaseResponse;

@interface GiftCardItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *cardExt;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
