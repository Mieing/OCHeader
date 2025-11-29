@class NSString, AWEDTOCreativeResolutionSizeModel;

@interface AWEDTOCreativeResolutionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *resolution;
@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *sourceResolution;
@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *originResolution;
@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *editResolution;
@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *publishResolution;
@property (nonatomic) BOOL qualityDowngradedEnableEffectSuperResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionJSONTransformer;
+ (id)sourceResolutionJSONTransformer;
+ (id)originResolutionJSONTransformer;
+ (id)editResolutionJSONTransformer;
+ (id)publishResolutionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
