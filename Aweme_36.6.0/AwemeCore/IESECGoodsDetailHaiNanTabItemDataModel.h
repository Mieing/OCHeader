@class NSArray, IESECTextWithIconElement, NSString;

@interface IESECGoodsDetailHaiNanTabItemDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *groupItems;
@property (retain, nonatomic) IESECTextWithIconElement *tabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
