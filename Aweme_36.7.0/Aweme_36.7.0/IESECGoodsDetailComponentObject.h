@class IESECGoodsDetailComponentUIConfig, NSString, IESECGoodsDetailComponentViewObject, NSArray, NSDictionary, IESECSliceStyle, IESECGoodsDetailComponentConfig;

@interface IESECGoodsDetailComponentObject : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentIdentifier;
@property (nonatomic) long long version;
@property (retain, nonatomic) IESECGoodsDetailComponentUIConfig *uiConfig;
@property (retain, nonatomic) IESECGoodsDetailComponentViewObject *viewObject;
@property (copy, nonatomic) NSString *sliceId;
@property (copy, nonatomic) NSString *sliceType;
@property (copy, nonatomic) NSArray *slices;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (retain, nonatomic) IESECSliceStyle *style;
@property (nonatomic) BOOL isSplit;
@property (copy, nonatomic) NSString *viewType;
@property (retain, nonatomic) IESECGoodsDetailComponentConfig *sliceConfig;
@property (nonatomic) BOOL isHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
