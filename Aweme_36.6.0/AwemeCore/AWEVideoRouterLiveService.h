@class AWEStudioSoloKTVPublishServiceImpl, NSString, ACCEditorSilentPublisher, AWEStudioTask, AWEUITransitionHost, AWEStudioSoloKTVAlbumServiceImpl;

@interface AWEVideoRouterLiveService : NSObject <AWEStudioLiveService>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (retain, nonatomic) ACCEditorSilentPublisher *silentPublisher;
@property (retain, nonatomic) AWEStudioTask *ktvSaveDraftTask;
@property (retain, nonatomic) AWEStudioSoloKTVAlbumServiceImpl *albumServiceImpl;
@property (retain, nonatomic) AWEStudioSoloKTVPublishServiceImpl *publishServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startVideoClipViewControllerWithModel:(id)a0 liveModel:(id)a1 extraDict:(id)a2;
- (void)saveDraftWithSegmentedClipModel:(id)a0 liveModel:(id)a1 missionModel:(id)a2 extraDict:(id)a3 completion:(id /* block */)a4;
- (id)startPublishLiveVideoWithModel:(id)a0 liveModel:(id)a1 extraDict:(id)a2;
- (void)downloadVideoAndSaveDraft:(id)a0 liveModel:(id)a1 progress:(id /* block */)a2 extraDict:(id)a3 completion:(id /* block */)a4 cancelBlockPasser:(id /* block */)a5;
- (id)soloKTVAlbumService;
- (id)soloKTVPublishService;
- (void)openEditorViewWithStickerConfig:(id)a0 image:(id)a1 targetTime:(double)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)handlestartOpenLiveSchema:(id)a0 completion:(id /* block */)a1;
- (void)startPublishLivePlaybackVideoWithModel:(id)a0 liveModel:(id)a1 completion:(id /* block */)a2;
- (void)startPublishLiveHighlightVideoWithModel:(id)a0 liveModel:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
