@class NSString;

@interface IESECGoodsShoppingGuideModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *guideID;
@property (copy, nonatomic) NSString *guideIcon;
@property (copy, nonatomic) NSString *guideName;
@property (copy, nonatomic) NSString *guideDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
