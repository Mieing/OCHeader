@class NSString, AWEDTOCreativeResolutionSizeModel;

@interface AWEDTOCreativeResolutionInstanceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *sourceResolution;
@property (retain, nonatomic) AWEDTOCreativeResolutionSizeModel *originResolution;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL enablePreviewSuperRes;
@property (nonatomic) BOOL enableFeedCacheSuperRes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceResolutionJSONTransformer;
+ (id)originResolutionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
