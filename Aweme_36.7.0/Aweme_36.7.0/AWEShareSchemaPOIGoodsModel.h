@class NSString, NSDictionary, AWEURLModel;

@interface AWEShareSchemaPOIGoodsModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *goodsName;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
