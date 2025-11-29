@class AWEVideoPublishFlowService, NSString, AWEVideoPublishViewModel, AWEResourceUploadParametersResponseModel;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishFlowServiceWrapper : NSObject <ACCPublishServiceProtocol>

@property (retain, nonatomic) AWEVideoPublishFlowService *service;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldPreservePublishTitle;
@property (nonatomic) BOOL isPostPage;
@property (nonatomic) BOOL isNewFriendsButtonPostEnterFromPublishPage;
@property (copy, nonatomic) id /* block */ modelConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveToAlbum;
- (id)createSaveAlbumHandleWithSourcePublishModel:(id)a0 updateSourceModel:(id /* block */)a1;
- (void)publishNormalVideo:(BOOL)a0;
- (void)generateCoverAndSave:(BOOL)a0 completion:(id /* block */)a1;
- (void)publishQuickStory;
- (void)cancelQuickShareWithCreationID:(id)a0;
- (void)publishNormalVideo;
- (void)p_forkDoPublishForStory:(BOOL)a0;
- (void)p_forkDoDraft;
- (void)p_configPublishModelForPublish;
- (void)saveDraftWithFeedback:(BOOL)a0;
- (void)saveOrignalDraft;
- (void)didDeleteWithError:(id)a0 aweme:(id)a1 enterFrom:(id)a2 eventParams:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)finishFlow;

@end
