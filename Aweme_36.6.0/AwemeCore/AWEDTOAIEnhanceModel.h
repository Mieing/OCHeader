@class NSString;

@interface AWEDTOAIEnhanceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL aiEnhanceOn;
@property (nonatomic) long long intensity;
@property (nonatomic) double originImageWidth;
@property (nonatomic) double originImageHeight;
@property (nonatomic) double originImageScale;
@property (copy, nonatomic) NSString *originImagePath;
@property (copy, nonatomic) NSString *originCompressedImagePath;
@property (copy, nonatomic) NSString *originCropIdentifier;
@property (copy, nonatomic) NSString *originCommitId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
