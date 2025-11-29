@class NSArray, NSString, IESECLiveImageURLModel;

@interface IESECLiveGoodsBargainAnimation : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *cardTopAnimation;
@property (retain, nonatomic) IESECLiveImageURLModel *borderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardTopAnimationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
