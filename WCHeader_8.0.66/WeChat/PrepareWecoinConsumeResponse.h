@class InterceptPopUp, ConsumeProductInfo, NSData, BaseResponse;

@interface PrepareWecoinConsumeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ctxBuff;
@property (retain, nonatomic) ConsumeProductInfo *consumeProductInfo;
@property (retain, nonatomic) InterceptPopUp *interceptInfo;

+ (void)initialize;

@end
