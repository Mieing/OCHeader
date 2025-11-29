@class NSString, IESECVideoPriceInfoDescriptionModel, IESECVideoPriceInfoItemModel;
@protocol IESECVideoPriceViewItemProtocol, IESECVideoPriceViewDescriptionProtocol;

@interface IESECVideoPriceInfoModel : MTLModel <IESECVideoPriceViewContentProtocol, MTLJSONSerializing>

@property (readonly, nonatomic) id<IESECVideoPriceViewItemProtocol> viewMainPrice;
@property (readonly, nonatomic) id<IESECVideoPriceViewItemProtocol> viewSubPrice;
@property (readonly, nonatomic) id<IESECVideoPriceViewDescriptionProtocol> viewPriceDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECVideoPriceInfoItemModel *mainPrice;
@property (retain, nonatomic) IESECVideoPriceInfoItemModel *subPrice;
@property (retain, nonatomic) IESECVideoPriceInfoDescriptionModel *priceDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainPriceJSONTransformer;
+ (id)subPriceJSONTransformer;
+ (id)priceDescriptionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
