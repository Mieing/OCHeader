@class NSString, IESEffectModel, IESSimpleVideoModel;

@interface IESVideoEffectWrapperModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) IESSimpleVideoModel *video;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)effectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
