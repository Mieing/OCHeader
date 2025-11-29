@class NSString;
@protocol WCFinderFullScreenEditVideoViewControllerDelegate;

@interface WCFinderFullScreenEditVideoViewController : WCFinderRootEditVideoViewController <WCFinderFullScreenCompositionLayoutViewDelegate, WCFinderEditDataReportDelegate>

@property (weak, nonatomic) id<WCFinderFullScreenEditVideoViewControllerDelegate> finderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoPath:(id)a0 thumbImage:(id)a1;
- (id)initWithVideoPaths:(id)a0 thumbImages:(id)a1;
- (id)initWithAssets:(id)a0;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)reTriggerVideoPreComposeAction;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showEditVideoViewOn:(id)a0;
- (double)targetOutputWidth;
- (BOOL)hidesStatusBar;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)editVideoLayoutViewDidPlayReachEnd:(id)a0;
- (void)loopPlay;
- (unsigned long long)indexOfMaxWidthAssets:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateVideoCropInfo:(id)a0 previewMoveDatas:(id)a1 isSizeCrop:(BOOL)a2;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (void)triggerSuperOnClickEditVideoDoneButtonLogic;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (void)onEnterForeground:(id)a0;
- (id)editResultComposition;
- (struct CGPoint { double x0; double x1; })emotionOffset;
- (id)originalUrls;
- (double)finderEditVideoLayoutViewGetVideoDurationInSecond;
- (void)finderEditVideoLayoutViewBGMChanged;
- (void)finderEditVideoLayoutEmotionChanged;
- (void)finderEditVideoLayoutCropDuration;
- (void)finderEditVideoLayoutDrawStart;
- (void)finderEditVideoLayoutDrawEnd;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
