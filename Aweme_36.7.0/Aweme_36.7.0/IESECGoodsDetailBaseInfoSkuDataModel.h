@class NSArray, IESECMediaScrollBoxElement, IESECTextWithIconElement, IESECMediaBoxElement, NSString, IESECTextElement;

@interface IESECGoodsDetailBaseInfoSkuDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMediaBoxElement *mainImage;
@property (retain, nonatomic) IESECTextElement *skuNumContent;
@property (nonatomic) long long textSpace;
@property (retain, nonatomic) IESECMediaScrollBoxElement *thumbnailList;
@property (retain, nonatomic) IESECTextWithIconElement *moreSkuInfoContent;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *priceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
