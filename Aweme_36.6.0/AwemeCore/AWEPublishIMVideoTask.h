@class AWEPublishTimeTracker, NSString, NSArray, AWEPublishBaseStage, NSError, AWEPublishFlowModel;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishIMVideoTask : AWEPublishIMBaseTask <AWEPublishRunnableStageObserver> {
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    AWEPublishTimeTracker *_timeTracker;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) double mergeProgress;
@property (copy, nonatomic) NSString *uploadVideoUrl;
@property (copy, nonatomic) NSArray *photoPaths;
@property (retain, nonatomic) AWEPublishBaseStage *mergeStage;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (nonatomic) BOOL shouldVideoSaveAsPhoto;
@property (nonatomic) BOOL disableAutoSend;
@property (nonatomic) BOOL disablePostIMFinishedNotification;
@property (copy, nonatomic) NSString *trackSharePanelType;
@property (copy, nonatomic) id /* block */ sendCompletion;
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
- (void)postNotiWithFilePath:(id)a0;
- (void)sendPhotoWithPath:(id)a0;
- (void)postNotiWithCoverImageOnly;
- (void)publishStage:(id)a0 updateProgress:(double)a1;
- (void)updateStage:(long long)a0 progress:(double)a1;
- (double)proportionStage:(long long)a0;
- (void)configStage:(long long)a0 userInfo:(id)a1;
- (void)finishStage:(long long)a0;
- (id)commonNotificationInfo;
- (id)videoInfoWithPath:(id)a0;
- (void)saveToAlbumIfNeededWithPath:(id)a0 isLivePhoto:(BOOL)a1;
- (id)suitablePublishViewModel:(id)a0;
- (id)p_getVideoStickerID:(id)a0;
- (BOOL)needSaveToAlbumForIM;
- (void)saveLivePhotoToAlbumIfNeededWithPath:(id)a0;
- (id)publishResultBasicInfo;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)timeTracker;
- (void)setTimeTracker:(id)a0;

@end
