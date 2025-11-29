@class NSArray, HTSLiveApi, NSString;
@protocol IESLiveSocialInteractiveRouter;

@interface IESLiveInteractPlayModeListComponent : IESLiveInteractComponentBase <IESLiveInteractPlayModeListRouter>

@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialRouter;
@property (copy, nonatomic) NSArray *playModeList;
@property (copy, nonatomic) NSArray *roomModeItemList;
@property (copy, nonatomic) NSArray *playingPlayModeTypeList;
@property (copy, nonatomic) NSArray *playingRoomModeTypeList;
@property (retain, nonatomic) HTSLiveApi *API;
@property (readonly, nonatomic) BOOL enableShowPlayModeEntranceOnSettingsPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentBindContext;
- (void)fetchPlayModeListWithCompletion:(id /* block */)a0;
- (id)createPlayModeConfigurationsWithSource:(id)a0;
- (void)popUpPlayModeSelectionPanelWithSource:(id)a0 ignoreLocalCache:(BOOL)a1;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void).cxx_destruct;

@end
