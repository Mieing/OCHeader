@class NSString, BaseResponse;

@interface MmecGetBulkBuyShareInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *ecmsgSignature;
@property (retain, nonatomic) NSString *ecsJumpInfoBase64;
@property (retain, nonatomic) NSString *shopName;

+ (void)initialize;

@end
