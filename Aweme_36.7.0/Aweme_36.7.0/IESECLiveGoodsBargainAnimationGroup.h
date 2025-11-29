@class NSArray, NSDictionary, NSString;

@interface IESECLiveGoodsBargainAnimationGroup : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
