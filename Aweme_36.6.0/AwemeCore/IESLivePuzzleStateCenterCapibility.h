@class PuzzleContext, NSDictionary, NSMutableSet, NSString;

@interface IESLivePuzzleStateCenterCapibility : NSObject <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveCurrentMatchInfoActions, IESLiveMultiTabAction, IESLivePlaybackMultiTabAction, PuzzleKitViewStateCenterCapbility>

@property (retain, nonatomic) NSMutableSet *liveStateEnums;
@property (retain, nonatomic) NSDictionary *layeredKeyMap;
@property (retain, nonatomic) PuzzleContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ updateStateHandler;

+ (id)liveStateKeysMap;

- (void)didSetAttachingDIContext;
- (void)didEnterLiveRoom:(id)a0;
- (void)multiTabViewDidScrollToTab:(long long)a0;
- (void)landscapeMultiTabViewDidScrollToTab:(long long)a0;
- (void)notifyPuzzleChangeMatchInfo:(id)a0;
- (void)registerMessageWithSet:(id)a0;
- (id)currentStateKeys;
- (void)_stateChanged:(id)a0;
- (id)filterStateDict:(id)a0 key:(id)a1 stateKeyValue:(id)a2;
- (void)multiTabChange:(long long)a0;
- (id)h5Key:(id)a0;
- (void)addKeyPath:(id)a0 value:(id)a1 toStateDict:(id)a2;
- (void)multiTabViewDidScrollToTabId:(long long)a0;
- (id)localCacheKeyWithOriginKey:(id)a0 routerParam:(id)a1;
- (void)updateRegisterKeys:(id)a0 layeredKeys:(id)a1;
- (void)unregisterKeys:(id)a0 layeredKeys:(id)a1;
- (id)currentStateWithKeys:(id)a0 layerKeys:(id)a1;
- (BOOL)canHandleKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;
- (void)addObservers;

@end
