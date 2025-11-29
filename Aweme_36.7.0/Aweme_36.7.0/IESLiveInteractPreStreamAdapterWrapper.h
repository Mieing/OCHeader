@class NSString, NSMutableDictionary, HTSLiveRoom;
@protocol IESLiveRoomService, IESLiveBigPartyRoomThemeImageUpdatable, IESLiveInteractionAsyncResourceLoader;

@interface IESLiveInteractPreStreamAdapterWrapper : NSObject <IESLiveInteractGlobalMessageSubscriber, IESLiveBigPartyPreStreamStageHelperAdapter, IESLiveBigPartyPreStreamStageRoomThemeUpdater, IESLiveBigPartyPreStreamStageRoomGetterAdapter, IESLiveInteractionAsyncResourceLoader, IESLiveInteractionAsyncResourceLoading>

@property (retain, nonatomic) NSMutableDictionary *currentThemeDataMap;
@property (retain, nonatomic) NSMutableDictionary *roomIDToPreLoadModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveRoom *liveRoomModel;
@property (weak, nonatomic) id<IESLiveBigPartyRoomThemeImageUpdatable> currentThemeImageUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInteractionAsyncResourceLoader> asyncResourceLoader;

- (void)updateRoomService:(id)a0 preLoad:(BOOL)a1 isNewRoom:(BOOL)a2;
- (void)updateRoomService:(id)a0;
- (void)asyncLoadResourceUsingBlock:(id /* block */)a0;
- (BOOL)isAnchorWithUserID:(id)a0;
- (void)refreshThemeImage:(id)a0;
- (void)interactGlobalMessageReceived:(id)a0 roomID:(id)a1;
- (void)updateRoomThemeData:(id)a0;
- (void)updateRoomThemeImage:(id)a0;
- (void)updateRoomThemeIconMics:(id)a0;
- (id)roomForStage;
- (void)updateMultiAudioGuestListThemeData:(id)a0;
- (void)updateRoomService:(id)a0 preLoad:(BOOL)a1;
- (void)preloadBgWithRoomID:(id)a0 anchorName:(id)a1 themeData:(id)a2;
- (void).cxx_destruct;

@end
