@class AWEStudioPOIPublishTrackerModel, NSString, NSDictionary, AWENewPublishPOITableViewCell, AWEPostPageReplaceInteractionManager, UIViewController;
@protocol AWEPostPageContext, AWEPostPageFooterService, AWEPostPageAggregateAnchorService;

@interface AWEPostPagePOIHandler : NSObject <AWEPostPagePOIService>

@property (retain, nonatomic) AWEStudioPOIPublishTrackerModel *poiTracker;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<AWEPostPageFooterService> footer;
@property (weak, nonatomic) id<AWEPostPageAggregateAnchorService> aggregateAnchorService;
@property (nonatomic) long long reloadCellUIStatusSignal;
@property (weak, nonatomic) AWENewPublishPOITableViewCell *elementCell;
@property (retain, nonatomic) AWEPostPageReplaceInteractionManager *sheetManager;
@property (copy, nonatomic) id /* block */ clearPoiToChooseAnchorBlock;
@property (nonatomic) long long goodsStickerConflictCheckSign;
@property (nonatomic) long long didClearPOISign;
@property (nonatomic) long long didClickSugSign;
@property (nonatomic) BOOL isAggregateAnchorWhenSelected;
@property (retain, nonatomic) id updatePOIWithModelSignal;
@property (nonatomic) BOOL anchorAssociatedTask;
@property (retain, nonatomic) NSDictionary *titleInfo;
@property (readonly, nonatomic) double sugViewHeight;
@property (copy, nonatomic) NSString *lifeAnchorParamsTask;
@property (readonly, nonatomic) NSString *lifeAnchorParamPersist;
@property (nonatomic) long long newInfluencerSign;
@property (nonatomic) BOOL isPOIRequestFinished;
@property (nonatomic) BOOL shouldShowPoiCell;
@property (nonatomic) long long chosenAnchorType;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)handleBroadcastNotification:(id)a0;
- (void)bindServices:(id)a0;
- (id)repoCommercialAnchor;
- (id)repoPOI;
- (void)clearPoiToChooseAnchor:(id)a0;
- (id)chosenAnchorName;
- (void)showPOIReplaceAnchorPanelWithEnterMethod:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)showAnchorReplacePOIPanelWithEnterMethod:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)POIReplaceAnchorSuccess;
- (void)anchorReplacePOISuccess;
- (id)repoLocalLifeMission;
- (id)repoContextInfo;
- (void)updatePOIElementCell:(id)a0;
- (void)addObserveToModelChange;
- (void)updateAnchorAssociatedTask;
- (id)changePoiTagTrackParamsWithEnterMethod:(id)a0 cancelTag:(BOOL)a1;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
