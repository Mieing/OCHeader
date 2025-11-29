@class DUXPopover, NSString, AWESearchScanPopEntranceView, AWESearchScanObservationManager;
@protocol AWESearchScanPopEntranceConfigProtocol, AWESearchScanPopEntranceDelegate;

@interface AWESearchScanPopEntranceHandler : NSObject <DUXPopoverDelegate, ACCScanImageGuideHandlerProtocol, AWESearchScanPopEntranceHandlerProtocol>

@property (retain, nonatomic) DUXPopover *duxPopover;
@property (nonatomic) BOOL isClicked;
@property (retain, nonatomic) AWESearchScanObservationManager *searchScanObserMag;
@property (nonatomic) unsigned long long popUsagePage;
@property (nonatomic) BOOL canFilterConditionOptimize;
@property (nonatomic) BOOL isProcessingImage;
@property (nonatomic) BOOL needCancelPopShow;
@property (retain, nonatomic) AWESearchScanPopEntranceView *searchScanPopEntrance;
@property (nonatomic) BOOL firstShown;
@property (retain, nonatomic) id<AWESearchScanPopEntranceConfigProtocol> config;
@property (weak, nonatomic) id<AWESearchScanPopEntranceDelegate> delegate;
@property (nonatomic) BOOL isDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)syncGetSearchScanImageOptimize;
+ (BOOL)isPhotoAuthorized;
+ (BOOL)checkUserSettingEnableScanPopShow;
+ (id)getPHFetchResult;
+ (BOOL)isLogin;

- (void)popoverDidDisappear:(id)a0;
- (void)popoverDidAppear:(id)a0;
- (void)fetchLatestPhotoCompletion:(id /* block */)a0;
- (void)hideAlbumImageGuideIfNeeded;
- (void)displayAlbumImageGuideWithCompletion:(id /* block */)a0;
- (BOOL)isImageGuideShowing;
- (void)setupConfigWithUsagePage:(id)a0 showOnView:(id)a1 target:(id)a2 targetPoint:(struct CGPoint { double x0; double x1; })a3 trackLog:(id)a4;
- (void)dismissPopView:(id)a0;
- (void)displaySearchPopEntranceIfNeeded:(id /* block */)a0;
- (void)displaySearchPopEntrance;
- (void)enterSearchScanResultPageWithImage:(id)a0;
- (BOOL)isUseGlobalCapture:(unsigned long long)a0;
- (void)trackVisualScanGuideClick;
- (BOOL)checkScanEntranceShowEnable;
- (void)trackVisualScanGuideFail:(id)a0;
- (void)trackerImageGuideShowTime;
- (void)fetLatestPhoto:(id /* block */)a0;
- (BOOL)checkAppearance:(id)a0;
- (void)getOriginalImageWithLastPhasset:(id)a0;
- (void)configPopover;
- (void)fetchLatestPhotoWithCompletion:(id /* block */)a0;
- (BOOL)checkAppearance:(id)a0 photoCreateTime:(double)a1 photoIdentify:(id)a2;
- (void)trackVisualScanGuideShow;
- (void)trackVisualScanGuideHide:(id)a0;
- (void)setLatestPhotoSearchIDInShowCondition;
- (void)trackVisualPicTimeDiffWithGuideID:(id)a0 timeDiff:(id)a1;
- (BOOL)shouldUseGlobalCapture:(id)a0;
- (BOOL)couldUseGlobalCapture:(unsigned long long)a0;
- (BOOL)checkIfLastIsCapture:(id)a0;
- (BOOL)checkClickWithPhotoIdentify:(id)a0;
- (BOOL)checkShowWithPhotoIdentify:(id)a0;
- (id)initWithUsagePage:(id)a0 showOnView:(id)a1 target:(id)a2 targetPoint:(struct CGPoint { double x0; double x1; })a3 trackLog:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
