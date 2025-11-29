@class DVEVideoTrackViewModel, NSMutableDictionary, NSString, UIView, DVEVideoThumbnailManager, DVEVideoPanelTracker;
@protocol DVEVideoTrackPreviewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate, DVECoreVideoProtocol;

@interface ACCChapterVideoTrackPreviewView : UIView <ACCChapterCoordinateTransfomer, DVECoreActionDelegate, DVEVideoThumbnailLoaderDataSource, UIGestureRecognizerDelegate>

@property (nonatomic) double leftOverlapTransitionWidth;
@property (nonatomic) double rightOverlapTransitionWidth;
@property (retain, nonatomic) NSMutableDictionary *subtitleSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *lyricsSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *stickerSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *musicSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *recordSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *extractSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textToAudioSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textTemplateSegmentsPool;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (nonatomic) BOOL isChapterPoints;
@property (weak, nonatomic) id<DVEVideoTrackPreviewDelegate> delegate;
@property (weak, nonatomic) id<ACCChapterVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (retain, nonatomic) NSMutableDictionary *subVideoLineSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *subPhotoLineSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *subVideoDropSegmentsPool;
@property (retain, nonatomic) NSMutableDictionary *textSegmentsPool;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) DVEVideoTrackViewModel *viewModel;
@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (retain, nonatomic) NSMutableDictionary *segmentViewPool;
@property (retain, nonatomic) DVEVideoPanelTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeAnimation;
- (void)nleEditorDidChange;
- (double)timeScaleForSlot:(id)a0;
- (id)assetForSlot:(id)a0;
- (id)absolutePathForResourceNode:(id)a0;
- (id)cacheKeyForSlot:(id)a0;
- (id)initWithContext:(id)a0 isChapterPoints:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectRelativeToTimeline:(id)a0;
- (void)setupSegmentWithAdded:(id)a0 removed:(id)a1;
- (void)clipTrackForTransition;
- (void)syncSelectedUI;
- (id)selectedSegmentView:(id)a0;
- (void)orderSegmentViewsAtFront:(id)a0;
- (BOOL)p_isMainVideoSelectedState;
- (void)resetSegmentsCliptype;
- (void)triggerFeedback;
- (void)startUpdateCurrentVideoFrameWithSlot:(id)a0;
- (void)normalizeWithSegmentView:(id)a0 animated:(BOOL)a1;
- (id)clipInfoForSlot:(id)a0;
- (void)reloadVideoTrackWithForce:(BOOL)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)addObserver;
- (void)refreshUI;
- (void)setupUI;
- (void)buildView;

@end
