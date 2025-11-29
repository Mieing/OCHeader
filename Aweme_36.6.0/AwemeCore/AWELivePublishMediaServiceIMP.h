@class NSString;
@protocol IESLiveToastFactory;

@interface AWELivePublishMediaServiceIMP : NSObject <AWEPublishTaskMessage, AWEStudioComposerFlowMessage, IESLivePublishMediaService>

@property (copy, nonatomic) id /* block */ publishRecordBeganCallback;
@property (copy, nonatomic) id /* block */ publishRecordProgressCallback;
@property (copy, nonatomic) id /* block */ publishRecordCompletion;
@property (copy, nonatomic) id /* block */ publishHighlightCompletion;
@property (retain, nonatomic) id<IESLiveToastFactory> toastFactory;
@property (copy, nonatomic) id /* block */ ktvBeganCallback;
@property (copy, nonatomic) id /* block */ ktvProgressCallback;
@property (copy, nonatomic) id /* block */ ktvCompletion;
@property (copy, nonatomic) NSString *currentCreationID;
@property (copy, nonatomic) id /* block */ publishHighlightBeganCallback;
@property (copy, nonatomic) id /* block */ publishHighlightEndCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (BOOL)convertTSSegmentsToMOVWithTSPaths:(id)a0 outputPath:(id)a1;
- (id)p_formatRoomCreateTimestamp:(id)a0;
- (void)saveDraftWithVideo:(id)a0 clipVcModel:(id)a1 liveModel:(id)a2 missionModel:(id)a3 completion:(id /* block */)a4;
- (id)p_saveHightLightDraftTrackDataFrom:(id)a0 withRoomId:(id)a1 videoId:(id)a2;
- (void)composerFlowWillEnter:(id)a0;
- (void)composerFlowDidExit:(id)a0;
- (BOOL)p_filterTask:(id)a0;
- (BOOL)isAnchorWithUserID:(id)a0;
- (void)saveMetadataWithVideoURL:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)getAnchorGuidePointMetaDataWithRoomID:(id)a0 startTime:(id)a1 endTime:(id)a2 source:(id)a3 completion:(id /* block */)a4;
- (void)publishBackRecordedVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 anchorDisplayID:(id)a4 enterFrom:(id)a5 began:(id /* block */)a6 progress:(id /* block */)a7 completion:(id /* block */)a8;
- (void)saveDraftWithBackRecordVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 anchorDisplayID:(id)a4 enterFrom:(id)a5 completion:(id /* block */)a6;
- (void)publishRecordedVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 anchorDisplayID:(id)a4 roomCreatedTime:(id)a5 startTime:(id)a6 endTime:(id)a7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 enterFrom:(id)a9 extraDict:(id)a10 began:(id /* block */)a11 progress:(id /* block */)a12 completion:(id /* block */)a13;
- (void)saveDraftWithVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 anchorDisplayID:(id)a4 roomCreatedTime:(id)a5 startTime:(id)a6 endTime:(id)a7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 enterFrom:(id)a9 completion:(id /* block */)a10;
- (void)saveDraftWithVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 anchorDisplayID:(id)a4 roomCreatedTime:(id)a5 startTime:(id)a6 endTime:(id)a7 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 enterFrom:(id)a9 params:(id)a10 completion:(id /* block */)a11;
- (void)saveDraftWithVideo:(id)a0 roomID:(id)a1 anchorUsername:(id)a2 anchorUserID:(id)a3 roomCreatedTime:(id)a4 startTime:(id)a5 endTime:(id)a6 watermarkFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 enterFrom:(id)a8 params:(id)a9 completion:(id /* block */)a10;
- (void)saveDraftWithVideoID:(id)a0 videoURL:(id)a1 title:(id)a2 roomID:(id)a3 roomTimeStr:(id)a4 startTime:(id)a5 endTime:(id)a6 enterFrom:(id)a7 fragmentID:(id)a8 shoppingExtras:(id)a9 params:(id)a10 promotionID:(id)a11 progress:(id /* block */)a12 completion:(id /* block */)a13 cancelBlockPasser:(id /* block */)a14;
- (void)publishPlaybackWithRoomID:(id)a0 cover:(id)a1 title:(id)a2 duration:(id)a3 enterFrom:(id)a4 fragmentID:(id)a5 completion:(id /* block */)a6;
- (void)publishHighlight:(id)a0 videoURL:(id)a1 title:(id)a2 roomID:(id)a3 roomTimeStr:(id)a4 startTime:(id)a5 endTime:(id)a6 enterFrom:(id)a7 fragmentID:(id)a8 shoppingExtras:(id)a9 promotionID:(id)a10 completion:(id /* block */)a11;
- (void)editorHighlightWithURL:(id)a0 shootWay:(id)a1 anchorID:(id)a2 anchorName:(id)a3 hashTag:(id)a4 body:(id)a5 createParams:(id)a6 eventParams:(id)a7 enterCompletion:(id /* block */)a8 exitAction:(id /* block */)a9;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
