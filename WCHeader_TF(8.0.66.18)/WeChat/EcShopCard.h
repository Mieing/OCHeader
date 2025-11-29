@class NSString, EcShopCard_ShopWindowProfileInfo, EcsJumpInfo, NSMutableArray;

@interface EcShopCard : WXPBGeneratedMessage

@property (retain, nonatomic) EcShopCard_ShopWindowProfileInfo *profileInfo;
@property (retain, nonatomic) NSMutableArray *simpleProducts;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *shopAppid;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *shopCardKey;
@property (nonatomic) BOOL onLive;
@property (retain, nonatomic) EcsJumpInfo *shopJumpInfo;

+ (void)initialize;

@end
