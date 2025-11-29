@class NLETrackMV_OC, NSString, NLETrack_OC, NSArray, IESMMMVModel;

@interface ACCEditMVModel : NSObject

@property (retain, nonatomic) IESMMMVModel *veMVModel;
@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NLETrackMV_OC *mvTrack;
@property (retain, nonatomic) NLETrack_OC *algorithmTrack;
@property (nonatomic) BOOL isMultiProjects;
@property (nonatomic) BOOL isAudioFitVideoDuration;
@property (readonly, nonatomic) NSArray *resources;

+ (id)nleAlgorithmResultWithVE:(id)a0 draftFolder:(id)a1;
+ (BOOL)p_isEffectMusicMV:(id)a0;
+ (BOOL)isEffectMusicMV:(id)a0;
+ (id)videoAssetsSelectedByUserFromVideoData:(id)a0;

- (void)setExtraParams:(id)a0;
- (void)setServerAlgorithmResults:(id)a0;
- (void)setBeatTrackingAlgorithmData:(id)a0;
- (void)userChangeMusic:(id)a0 completion:(id /* block */)a1;
- (void)userChangePictures:(id)a0 newPictureUrls:(id)a1 completion:(id /* block */)a2;
- (void)p_addPlaceholderMVAudioTrackIfNeeded:(id)a0 repository:(id)a1;
- (void)p_removePlaceholderMVAudioTrackIfNeeded:(id)a0 videoData:(id)a1;
- (void)generateMVWithPath:(id)a0 repository:(id)a1 userResourses:(id)a2 resourcesDuration:(id)a3 videoData:(id)a4 completion:(id /* block */)a5;
- (void)p_updateBGMSubtypeForDraftWithRepository:(id)a0 videoData:(id)a1;
- (id)p_bgmTrackWithRepository:(id)a0 bgmAsset:(id)a1 nle:(id)a2;
- (unsigned long long)p_audioTypeInMV:(id)a0;
- (id)initWithDraftFolder:(id)a0;
- (void)generateMusicBeatsMVWithRepository:(id)a0 userResourses:(id)a1 completion:(id /* block */)a2;
- (void)generateMVWithPath:(id)a0 repository:(id)a1 userResourses:(id)a2 completion:(id /* block */)a3;
- (void)generateMVWithPath:(id)a0 repository:(id)a1 userResourses:(id)a2 videoData:(id)a3 completion:(id /* block */)a4;
- (void)clearAndAddBGMWithVideoData:(id)a0 bgmAsset:(id)a1 repository:(id)a2;
- (void)replaceAudioWithVideoData:(id)a0 repository:(id)a1;
- (void)addBGMForDraftWithRepository:(id)a0;
- (void)setResolution:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
