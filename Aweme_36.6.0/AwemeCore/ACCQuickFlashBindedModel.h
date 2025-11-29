@class NSString, IESEffectModel, AWEQuickFlashStickerModel;

@interface ACCQuickFlashBindedModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL exist;
@property (nonatomic) unsigned long long flashMobBindType;
@property (retain, nonatomic) AWEQuickFlashStickerModel *flashMobModel;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flashMobModelJSONTransformer;
+ (id)effectModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
