@class NSString, HTSLiveGoodsStruct;

@interface HTSLiveBizGoods : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGoodsStruct *goods;
@property (nonatomic) BOOL hasGoods;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long consumeScene;

+ (id)descriptor;

@end
