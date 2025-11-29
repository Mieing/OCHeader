@class NSMutableArray, BaseResponse;

@interface FinderGetUpLevelProductResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *productMetaList;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned long long consumedWecoinAmount;
@property (retain, nonatomic) NSMutableArray *levelConfigList;
@property (nonatomic) unsigned long long limitConsumeWecoin;
@property (nonatomic) unsigned long long limitChooseProduct;

+ (void)initialize;

@end
