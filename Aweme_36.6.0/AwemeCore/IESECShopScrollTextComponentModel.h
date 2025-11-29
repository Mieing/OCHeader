@class NSString, IESECShopTextComponentModel, IESECShopTextScrollConfig;

@interface IESECShopScrollTextComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopTextComponentModel *text;
@property (retain, nonatomic) IESECShopTextScrollConfig *scrollConfig;
@property (nonatomic) BOOL shrinkToFit;
@property (nonatomic) BOOL autoScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
