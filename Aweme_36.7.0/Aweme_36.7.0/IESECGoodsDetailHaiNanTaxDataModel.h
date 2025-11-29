@class NSArray, IESECGoodsDetailHaiNanTabItemDataModel, NSString, IESECLongContentLabelElement;

@interface IESECGoodsDetailHaiNanTaxDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLongContentLabelElement *title;
@property (copy, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTabItemDataModel *currentSelectTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
