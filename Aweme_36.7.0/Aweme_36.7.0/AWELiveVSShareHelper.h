@interface AWELiveVSShareHelper : NSObject

+ (void)openLiveFormatWithShareContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
+ (void)openLiveFormatWithShareContentModel:(id)a0 episodeModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
+ (void)playbacktLandscapeShareWithContentModel:(id)a0 episodeModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 dismissBlock:(id /* block */)a4;
+ (void)openImageShareLandscpaePanelWithContentModel:(id)a0 roomModel:(id)a1 fromController:(id)a2 eventContext:(id)a3 willDismissHandler:(id /* block */)a4;
+ (id)getShareModelWithRoom:(id)a0 shareContent:(id)a1;
+ (void)showSharePanelWithContentModel:(id)a0 roomModel:(id)a1 onViewController:(id)a2;
+ (void)openLandscapePannelWithContentModel:(id)a0 roomModel:(id)a1 eventContext:(id)a2 fromController:(id)a3;
+ (void)addTrackParamsToContentModel:(id)a0;
+ (void)adjustMappedRoom:(id)a0 withShareContent:(id)a1;
+ (id)livesdkShareEventPageWithType:(long long)a0;
+ (id)livesdkShareContentWithType:(long long)a0;
+ (void)collectionShareWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)chainSceneShareWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)screenshotShareWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)openLiveBoardWithModel:(id)a0 fromController:(id)a1 dismissBlock:(id /* block */)a2;
+ (id)getFormatModelWithRoom:(id)a0 shareContent:(id)a1 pageContext:(id)a2;
+ (id)getShareModelWithEpisode:(id)a0 shareContent:(id)a1;
+ (void)playbackShareWithModel:(id)a0 content:(id)a1 fromController:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)openFormatBoardWithContentModel:(id)a0 episodeModel:(id)a1 fromController:(id)a2 pageContext:(id)a3 dismissBlock:(id /* block */)a4;
+ (id)getFormatModelWithEpisode:(id)a0 shareContent:(id)a1 pageContext:(id)a2;

@end
