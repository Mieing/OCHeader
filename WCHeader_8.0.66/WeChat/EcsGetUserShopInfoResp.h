@class NSMutableArray, BaseResponse;

@interface EcsGetUserShopInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *userShopInfos;

+ (void)initialize;

@end
