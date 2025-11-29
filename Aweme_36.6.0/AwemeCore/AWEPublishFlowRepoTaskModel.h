@class ACCImageAlbumExportFramesResult, NSArray, AWEUploadCoverResourceModel, ACCThreadSafeMutableDictionary, AWEResourceUploadParametersResponseModel, AWEPublishSaveAlbumReviewResult, AWECreateAwemeResponse;

@interface AWEPublishFlowRepoTaskModel : AWEBaseBizConfigModel

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *videoMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *imageMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *livePhotoFirstFrameMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *livePhotoVideoMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *videoUploadResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *imageUploadResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *livePhotoFirstFrameUploadResultDict;
@property (retain, nonatomic) AWEUploadCoverResourceModel *resourceModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *waterMarkUrlDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *imageWaterMarkUrlDict;
@property (retain, nonatomic) ACCImageAlbumExportFramesResult *exportFramesResult;
@property (retain, nonatomic) NSArray *uploadImageFrames;
@property (copy, nonatomic) NSArray *uploadRetryCountList;
@property (retain, nonatomic) AWEPublishSaveAlbumReviewResult *saveAlbumReviewResult;

- (id)imageUploadResultArray;
- (id)deepCopyDictionary:(id)a0;
- (void)filterDictionary:(id)a0 forProjectIndex:(long long)a1;
- (void)splitExportFramesResult:(id)a0 forProjectIndex:(long long)a1;
- (void)splitUploadImageFrames:(id)a0 forProjectIndex:(long long)a1;
- (void)resetIndexForObject:(id)a0;
- (id)trackParamsForUploadRetry;
- (id)splitForProjectIndex:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
