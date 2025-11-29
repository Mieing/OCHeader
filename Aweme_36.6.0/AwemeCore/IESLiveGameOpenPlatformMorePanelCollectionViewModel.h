@class IESLiveAnchorAudienceInteractiveGameModel, NSMutableArray;

@interface IESLiveGameOpenPlatformMorePanelCollectionViewModel : NSObject

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL needsReload;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;

- (id)attachingDIContext;
- (void)morePanelLoadDatas;
- (id)initWithGameModel:(id)a0 isLandscapeStyle:(BOOL)a1 diContext:(id)a2;
- (id)createModelWithImageName:(id)a0 title:(id)a1 itemType:(unsigned long long)a2;
- (void)_updateShareScreenItem;
- (void)_updateExplainCardItemIfNeeded:(id)a0;
- (void)_handleExplainCardStartItemDidClickWithDataModel:(id)a0;
- (void)trackClickedStartExplainCardAlert:(id)a0;
- (void)_handleExplainCardStopItemDidClickWithDataModel:(id)a0;
- (void)trackClickedStopExplainCardAlert:(id)a0;
- (id)createExplainCardStopDataModel;
- (id)createExplainCardStartDataModel;
- (void)_setNeedsReload;
- (id)createModelWithImageName:(id)a0 title:(id)a1 itemType:(unsigned long long)a2 backgroundColor:(id)a3;
- (BOOL)canShowShareScreenItem;
- (id)createCancelShareScreenCollectDataModel;
- (id)createShareScreenDataModel;
- (id)initWithGameModel:(id)a0 diContext:(id)a1;
- (void)handleMorePanelDidShow;
- (void)resetShareScreenItem;
- (void)handleItemDidClickWithDataModel:(id)a0;
- (void).cxx_destruct;
- (void)reloadDataSource;

@end
