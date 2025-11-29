@class NSArray, IESECLiveGoodsListRotationModel, NSDictionary, NSString;

@interface IESECLiveGoodsListHeaderPromotionComponentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) IESECLiveGoodsListRotationModel *rotationModel;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
