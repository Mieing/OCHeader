@class NSString;

@interface AWESearchVisionModuleService : NSObject <AWESearchVisionBundleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableAISearchNewFrameWorkScanCircleEditPage;
+ (id)sharedInstance;

- (void)createVisualSearchContentRequestWithImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)jumpToVideoDeconstructWithDataContext:(id)a0;
- (id)fetchIntentDataWithModel:(id)a0 andConfig:(id)a1;
- (void)handleCameraScanSampleImageGuide:(id /* block */)a0 trackParams:(id)a1;
- (void)handleCameraScanSampleImageGuide:(id /* block */)a0 trackParams:(id)a1 showOnVc:(id)a2;
- (BOOL)isCurrentDialog;
- (void)resetCameraScanSampleImageGuide;
- (void)jumpToScanPageWithDataContext:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (Class)searchVisionPauseVideoTagMonitor;
- (id)scanPicDefaultTagManager;
- (id)displayAlbumImageGuideWithTrackParams:(id)a0 usagePage:(id)a1 showOnView:(id)a2 targetView:(id)a3 targetPoint:(struct CGPoint { double x0; double x1; })a4 extra:(id)a5 completion:(id /* block */)a6;
- (id)syncGetSearchScanSampleImageGuide;
- (BOOL)shouldEnableShowSearchScanPop;
- (id)searchScanOCRHelper;
- (id)scanResultGeneralDataManager;
- (id)searchVisionImageTextSearchManager;
- (id)searchLynxSSERequestController;
- (id)searchScanOCRContext;
- (id)searchScanOCRControllerWithContext:(id)a0;
- (id)scanResultGeneralCachalotContext;
- (id)scanResultGeneralVC;
- (id)scanResultGeneralVCWithConfig:(id)a0;
- (id)scanVCWith:(id)a0;
- (id)scanCircleSearchRectViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scanCircleSearchSelectionViewWithContainer:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (Class)searchVisionImageTextSearchManagerClass;
- (Class)searchScanGeometryCalculatorClass;
- (Class)searchScanOCRHelperClass;
- (Class)scanResultGeneralCachalotContextClass;
- (Class)scanResultGeneralDataManagerClass;
- (Class)scanResultGeneralVCClass;
- (id)aweScanSearchIDRecordArray;
- (id)scanPicIntentionManager;
- (id)getImageTextSearchNotification;
- (id)getLynxSEEEventSourceReceived;
- (id)scanPopEntranceHandler;
- (id)scanPopEntranceHandlerWithUsagePage:(id)a0 showOnView:(id)a1 target:(id)a2 targetPoint:(struct CGPoint { double x0; double x1; })a3 trackLog:(id)a4;
- (void)jumpToAISearchNewFrameWorkScanCircleEditPage:(id)a0;

@end
