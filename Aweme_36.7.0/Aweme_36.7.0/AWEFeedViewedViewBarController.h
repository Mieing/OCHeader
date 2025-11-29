@class AWEAwemeModel, UIView, AFDViewedBottomView, DUXBottomNotification, NSString, AWEBinding, AWEFeedViewedViewBarContext, NSObject, AFDFrequencyExitRule, AFDStory25FeedBarPublishLoadingView, AWEViewerListDataController;
@protocol AFDStory25ViewedViewerGuideAnimationProtocol, AWEPlayInteractionShareElementViewModelProtocol, AWEPublishMultiSplitSubTaskProtocol, AFDViewedBottomInnerViewProtocol, AFDFeedBottomBarVideoAnalysisPanelManagerProtocol;

@interface AWEFeedViewedViewBarController : NSObject <AFDStory25ViewedViewerGuideAnimationDelegate, AWEPlayInteractionShareActionLifeCycleDelegate, AWEAwemeDetailBottomBarController, AWEFeedViewedViewBarControllerProtocol>

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedViewedViewBarContext *context;
@property (retain, nonatomic) AWEViewerListDataController *viewerListdataController;
@property (retain, nonatomic) UIView<AFDViewedBottomInnerViewProtocol> *bottomInnerView;
@property (retain, nonatomic) AFDViewedBottomView *bottomView;
@property (retain, nonatomic) AFDStory25FeedBarPublishLoadingView *publishLoadingView;
@property (retain, nonatomic) NSObject<AWEPublishMultiSplitSubTaskProtocol> *publishTask;
@property (retain, nonatomic) AWEBinding *publishTaskProgressBindObj;
@property (retain, nonatomic) AWEBinding *publishTaskStatusBindObj;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) long long updateTiming;
@property (retain, nonatomic) NSObject<AFDFeedBottomBarVideoAnalysisPanelManagerProtocol> *videoAnalysisPanelManager;
@property (retain, nonatomic) id<AFDStory25ViewedViewerGuideAnimationProtocol> story25GuideAnimationAlert;
@property (retain, nonatomic) id<AWEPlayInteractionShareElementViewModelProtocol> shareViewModel;
@property (retain, nonatomic) AFDFrequencyExitRule *notShowDialogRule;
@property (nonatomic) BOOL awemeModelUpdated;
@property (nonatomic) unsigned long long updatedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)updateBottomBarAlpha:(double)a0;
- (BOOL)isTryingToShowPanel;
- (id)aAWEPadModuleAdapter;
- (void)didUpdateShareActionStatus:(unsigned long long)a0;
- (id)emoticonList;
- (id)avatarArray;
- (void)onCommentAddNotification:(id)a0;
- (void)onCommentTotalCountNotification:(id)a0;
- (BOOL)isPlayTitleClickable;
- (void)showViewerList;
- (void)onCommentDeleteNotification:(id)a0;
- (BOOL)shouldShowBulletScreen;
- (id)story25GuideAnimationAwemeModel;
- (id)animationParentView;
- (BOOL)isClickEventDisable;
- (void)didClickShareBtn;
- (void)monitorBrowswRecordListCount;
- (void)monitorDataAnalyticsShow;
- (void)monitorDataAnalyticsClick;
- (void)showDataAnalyticsPage;
- (id)currentViewerListdataController;
- (void)updateViewerViewAfterDiggChanged:(id)a0;
- (void)updateViewerViewCountChanged:(id)a0;
- (void)updateAndReloadViewer;
- (void)bindPublishStatus;
- (void)showPublishErrorView;
- (void)cancelStory25ViewedViewerGuideAnimationIfNeededWithAwemeModel:(id)a0;
- (void)showStory25GuideAnimationIfNeeded;
- (void)showViewerListOfflineDialog;
- (void)trackClickViewerList:(BOOL)a0;
- (BOOL)canStory25GuideAnimationShow;
- (long long)animationImagesNum;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;

@end
