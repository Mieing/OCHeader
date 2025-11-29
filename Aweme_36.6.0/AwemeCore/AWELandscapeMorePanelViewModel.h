@class UIView, AWELandscapePageContext, UICollectionView, AWEBinding, AWEAwemeModel, NSMutableArray, AWELandscapeMorePanelCellModel;
@protocol AWELandscapeMorePanelViewDelegate;

@interface AWELandscapeMorePanelViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEBinding *timingCloseBinding;
@property (copy, nonatomic) id /* block */ timingCloseHandler;
@property (retain, nonatomic) AWEBinding *timingCloseTypeBinding;
@property (copy, nonatomic) id /* block */ timingCloseTypeHandler;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *diamondDataSource;
@property (retain, nonatomic) NSMutableArray *listDataSource;
@property (retain, nonatomic) AWELandscapeMorePanelCellModel *watchLaterPanelModel;
@property (weak, nonatomic) id<AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView *container;

+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)updateWithModel:(id)a0 pageContext:(id)a1;
- (void)bindObserver;
- (id)aAWEBrandColorAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)cellModelWithIndexPath:(id)a0;
- (void)configDataSource;
- (void)willShowMorePanel;
- (void)removeBindAfterDismissed;
- (long long)numberOfDiamonds;
- (void)handleWatchLaterInfoChangeNotification:(id)a0;
- (void)configDiamondDataSource;
- (void)configListDataSource;
- (id)linePanelModel;
- (BOOL)canShowDanmaku;
- (id)danmakuSettingsPanelModel;
- (BOOL)shouldShowBGPlaySettings;
- (id)backgroundPlayPanelModel;
- (id)bgPlaySmallWindowPanelModel;
- (id)autoRotateSwitchPanelModel;
- (id)subtitlePanelModel;
- (id)timingClosePanelModel;
- (id)pcContinuePlayCellModel;
- (id)cacheVideoPanelModel;
- (BOOL)isSelfVideo;
- (id)dislikePanelModel;
- (id)reportPanelModel;
- (id)castPanelModel;
- (BOOL)shouldShowPlaySettings;
- (id)playSettingsPanelModel;
- (id)bgplaySettingsCellModel;
- (void)addToWatchLater:(id)a0;
- (void)reloadTimingClosePanelModel:(id)a0;
- (void)trackTimingCloseClick;
- (id)newTrackerContinuePlayCommonParams;
- (void)trackClickPCContinuePlay;
- (void)trackShowPCContinuePlay;
- (void)trackChangeSubtitleToStatus:(BOOL)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
