@class AWEPublishCoverMergeStage, AWEPublishCustomPropUploadStage, AWEPublishInfiniHandleAwemeStage, AWEPublishInfiniSaveAlbumStage, AWEPublishInfiniWaterMarkStage, AWEPublishInfiniReviewStage, AWEPublishInfiniMergeStage, AWEPublishVidValidationStage, NSString, AWEPublishEffectCaptionStickerCreateStage, AWEPublishWaterMarkStage, AWEPublishInfiniLivePhotoMergeStage, AWEPublishInfiniEventStage, AWEPublishUploadPhotoStage, AWEPublishTextOnImageStickerCreateStage, AWEPublishFinishedStage, AWEReeditPublishStage, AWEPublishAlbumImageSaveToAlbumStage, AWEPublishScanOriginPhotoStage, AWEPublishRedpacketOrderStage, AWEPublishCreateModelStage, AWEPublishRequestParamStage, AWEPublishInfiniUploadStage, AWEPublishShareStage;

@interface AWEPublishStageNetBuilder : NSObject <AWEPublishStageNetBuilderProtocol>

@property (retain, nonatomic) AWEPublishRequestParamStage *requestParamStage;
@property (retain, nonatomic) AWEPublishInfiniMergeStage *mergeStage;
@property (retain, nonatomic) AWEPublishInfiniUploadStage *uploadStage;
@property (retain, nonatomic) AWEPublishUploadPhotoStage *uploadCoverStage;
@property (retain, nonatomic) AWEPublishCreateModelStage *createModelStage;
@property (retain, nonatomic) AWEPublishInfiniHandleAwemeStage *handleAwemeStage;
@property (retain, nonatomic) AWEPublishCustomPropUploadStage *customPropUploadStage;
@property (retain, nonatomic) AWEPublishInfiniReviewStage *reviewStage;
@property (retain, nonatomic) AWEPublishFinishedStage *finishedStage;
@property (retain, nonatomic) AWEPublishShareStage *shareStage;
@property (retain, nonatomic) AWEPublishInfiniSaveAlbumStage *infiniSaveAlbumStage;
@property (retain, nonatomic) AWEPublishInfiniWaterMarkStage *infiniWaterMarkStage;
@property (retain, nonatomic) AWEPublishInfiniLivePhotoMergeStage *infiniLivePhotoMergeStage;
@property (retain, nonatomic) AWEPublishWaterMarkStage *waterMarkStage;
@property (retain, nonatomic) AWEPublishScanOriginPhotoStage *scanStage;
@property (retain, nonatomic) AWEPublishVidValidationStage *vidValidationStage;
@property (retain, nonatomic) AWEPublishRedpacketOrderStage *redpacketOrderStage;
@property (retain, nonatomic) AWEPublishAlbumImageSaveToAlbumStage *imageSaveToAlbumStage;
@property (retain, nonatomic) AWEPublishInfiniEventStage *waitPublishClickEventStage;
@property (retain, nonatomic) AWEPublishInfiniEventStage *waitMergePartFinishEventStage;
@property (retain, nonatomic) AWEPublishInfiniEventStage *waitMergeStartForVidEventStage;
@property (retain, nonatomic) AWEPublishInfiniEventStage *waitUploadWhileMergeEventStage;
@property (retain, nonatomic) AWEReeditPublishStage *reeditAwemeStage;
@property (retain, nonatomic) AWEPublishCoverMergeStage *coverMergeStage;
@property (retain, nonatomic) AWEPublishTextOnImageStickerCreateStage *textOnImageStickerStage;
@property (retain, nonatomic) AWEPublishEffectCaptionStickerCreateStage *effectCaptionStickerStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)build;

@end
