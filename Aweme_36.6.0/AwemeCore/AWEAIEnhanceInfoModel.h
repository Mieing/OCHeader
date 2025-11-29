@class NSString;

@interface AWEAIEnhanceInfoModel : MTLModel <ACCRepoDataDiff>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL aiEnhanceOn;
@property (copy, nonatomic) NSString *originImagePath;
@property (copy, nonatomic) NSString *originCompressedImagePath;
@property (copy, nonatomic) NSString *originCropIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } originImageSize;
@property (nonatomic) double originImageScale;
@property (copy, nonatomic) NSString *originCommitId;
@property (nonatomic) long long intensity;
@property (nonatomic) BOOL disablePanelPageWiperAnimation;

@end
