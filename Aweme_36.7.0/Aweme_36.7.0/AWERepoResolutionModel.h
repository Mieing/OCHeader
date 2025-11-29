@class NSString;

@interface AWERepoResolutionModel : ACCRepositoryGlobalCommonModel <ACCRepoModelDraftProtocol, NSCopying, AWERepoResolutionData, ACCRepoRegister>

@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) struct CGSize { double width; double height; } editResolution;
@property (nonatomic) struct CGSize { double width; double height; } publishResolution;
@property (nonatomic) struct CGSize { double width; double height; } sourceResolution;
@property (nonatomic) struct CGSize { double width; double height; } originResolution;
@property (nonatomic) BOOL enableEffectSuperResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)originalFileBitrateArray;
- (id)originalFileSizeArray;
- (id)sourceFileBitrateArray;
- (id)sourceFileSizeArray;
- (id)previewResolutionArray;
- (id)fastImportArray;
- (id)isEditArray;
- (id)isReencodeArray;
- (id)materialTypeArray;
- (id)exportResolutionArray;
- (id)exportFileBitrateArray;
- (id)exportFileSizeArray;
- (id)publishFileBitrateArray;
- (id)publishFileSizeArray;
- (id)originalResolutionArray;
- (id)sourceResolutionArray;
- (id)editResolutionArray;
- (id)publishResolutionArray;
- (id)ImageQualityTrackData:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
