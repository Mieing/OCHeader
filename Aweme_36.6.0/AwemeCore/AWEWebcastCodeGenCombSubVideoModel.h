@class NSString, AWEWebcastCodeGenProductPriceModel, AWEWebcastCodeGenImageModel;

@interface AWEWebcastCodeGenCombSubVideoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuId;
@property (retain, nonatomic) AWEWebcastCodeGenProductPriceModel *priceInfoModel;
@property (nonatomic) int productBiz;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int relatedCombNum;
@property (retain, nonatomic) AWEWebcastCodeGenImageModel *coverModel;
@property (copy, nonatomic) NSString *likeCount;
@property (nonatomic) long long duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
