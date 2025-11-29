@class NSDictionary, NSString, IESECGoodsDetailComponentScaleConfig;

@interface IESECGoodsDetailComponentViewObject : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *display;
@property (copy, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) IESECGoodsDetailComponentScaleConfig *scaleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
