@class PresentOrderInfo, NSString, BaseResponse;

@interface MmecGetPresentOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PresentOrderInfo *presentOrderInfo;
@property (nonatomic) BOOL canChangeSku;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int rollInterval;

+ (void)initialize;

@end
