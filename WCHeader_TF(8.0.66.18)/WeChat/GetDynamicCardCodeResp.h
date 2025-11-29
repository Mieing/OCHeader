@class NSMutableArray, BaseResponse;

@interface GetDynamicCardCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *qrCodeItemList;

+ (void)initialize;

@end
