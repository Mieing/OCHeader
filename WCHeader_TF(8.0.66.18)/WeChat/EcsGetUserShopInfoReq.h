@class BaseRequest, NSMutableArray;

@interface EcsGetUserShopInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *shopAppids;

+ (void)initialize;

@end
