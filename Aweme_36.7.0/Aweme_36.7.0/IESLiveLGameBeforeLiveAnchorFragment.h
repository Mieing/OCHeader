@class IESLiveLGameBeforeLiveModel, IESLiveLGameBeforeLiveApi, NSDictionary, BDXBridgeEventSubscriber, NSString, IESLiveGuideToolBarItem;

@interface IESLiveLGameBeforeLiveAnchorFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveLGameGuideRouter, IESLiveGuideToolBarAction, IESLiveGuideSourceParamsEvent, IESLiveAnchorOptCategoryActions, IESLiveGuideOpenLiveAdditionalEvent>

@property (nonatomic) long long lGameCategoryID;
@property (retain, nonatomic) IESLiveGuideToolBarItem *gameGuideToolbarItem;
@property (retain, nonatomic) IESLiveLGameBeforeLiveModel *beforeLiveModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;
@property (retain, nonatomic) IESLiveLGameBeforeLiveApi *networkApi;
@property (nonatomic) BOOL hasReadBusinessExtra;
@property (copy, nonatomic) NSDictionary *roomSourceParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentDestroy;
- (id)commonTrackerParams;
- (void)trackItemShow;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)toolbarItemReloadFinished;
- (void)appendCreateAnchorBusinessParams:(id)a0 completion:(id /* block */)a1;
- (void)removeEventSubscriber;
- (void)trackItemClick;
- (void)completeFetchOptCategories:(id)a0;
- (void)addEventSubscriber;
- (id)getSourceParamStr;
- (void)sourceParamsDidUpdated;
- (BOOL)hasMountGame;
- (void)showGuideGameItemAndTrack:(id)a0 selected:(BOOL)a1;
- (void)handleMountGame:(id)a0;
- (void)handleUnmountGame;
- (id)taskIDFromSourceParams;
- (void)setRoomSourceParam:(id)a0 key:(id)a1;
- (void)fetchOptCategoriesIfNeed:(unsigned long long)a0;
- (void)changeCategoryIfNeed;
- (void)fetchSwitchTask:(id)a0 toTaskID:(id)a1;
- (id)getGameMountPageBaseURL;
- (void)buildBeforeLiveModel:(id)a0;
- (void)updateGuideItemSelected:(BOOL)a0;
- (void)showGuideGameItem:(id)a0 selected:(BOOL)a1;
- (BOOL)checkPayloadIsLGame:(id)a0;
- (BOOL)needHandleCategory:(unsigned long long)a0;
- (id)confuseItemTitle;
- (void)handleGuideItemClick;
- (void)trackInfoCardClick:(id)a0;
- (void)trackInfoCardPopupClick:(id)a0;
- (id)transformTaskSource:(id)a0;
- (void).cxx_destruct;

@end
