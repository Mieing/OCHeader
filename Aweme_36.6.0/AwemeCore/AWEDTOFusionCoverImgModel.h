@class NSArray, NSString;

@interface AWEDTOFusionCoverImgModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *fusionCoverPreviewInfo;
@property (copy, nonatomic) NSArray *fusionCoverBaseImgDecorInfo;
@property (copy, nonatomic) NSArray *fusionCoverSurfaceSizeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
