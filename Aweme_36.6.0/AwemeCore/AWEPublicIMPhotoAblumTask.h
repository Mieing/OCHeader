@class AWEPublishTimeTracker, NSString, AWEPublishBaseStage, AWEPublishFlowModel, NSError;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublicIMPhotoAblumTask : AWEPublishIMBaseTask <AWEPublishRunnableStageObserver> {
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEPublishTimeTracker *_timeTracker;
}

@property (nonatomic) double mergeProgress;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *uploadImageUrl;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) AWEPublishBaseStage *mergeStage;
@property (nonatomic) BOOL provideImageInstedOfPostNoti;
@property (nonatomic) BOOL forcePhoto;
@property (copy, nonatomic) id /* block */ onTaskFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentStage:(long long)a0;
- (id)editService;
- (void)setEditService:(id)a0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)a0;
- (void)publishStage:(id)a0 didChangeStatus:(long long)a1 userInfo:(id)a2;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (void)sendPhotoWithPath:(id)a0;
- (void)publishStage:(id)a0 updateProgress:(double)a1;
- (void)updateStage:(long long)a0 progress:(double)a1;
- (double)proportionStage:(long long)a0;
- (void)configStage:(long long)a0 userInfo:(id)a1;
- (void)finishStage:(long long)a0;
- (void)p_callBackImageWithPath:(id)a0;
- (void)saveToAlbmIfNeeded:(id)a0;
- (id)p_imagePathWithAlbumExportItemModelPath:(id)a0;
- (id)p_imageWithImagePath:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)timeTracker;
- (void)setTimeTracker:(id)a0;

@end
