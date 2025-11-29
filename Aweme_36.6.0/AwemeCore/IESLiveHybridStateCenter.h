@class NSString, NSDictionary, NSMutableSet, NSMutableDictionary, NSSet;
@protocol IESHYHybridViewProtocol;

@interface IESLiveHybridStateCenter : NSObject <HTSLiveRoomRemoteActions, HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveCurrentMatchInfoActions, PuzzleStateObserver, PuzzleHybridStateCenterProtocol>

@property (retain, nonatomic) NSString *logPath;
@property (retain, nonatomic) NSDictionary *liveStateKeysMap;
@property (retain, nonatomic) NSMutableSet *liveStateKeys;
@property (retain, nonatomic) NSMutableSet *otherStateKeys;
@property (retain, nonatomic) NSMutableDictionary *stateKeyValue;
@property (weak, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (retain, nonatomic) NSSet *currentStateKeys;
@property (retain, nonatomic) NSSet *currentOtherStateKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)mapDictByReplaceAllNumberValueToString:(id)a0;
- (void)didEnterLiveRoom:(id)a0;
- (void)multiTabViewDidScrollToTab:(long long)a0;
- (void)landscapeMultiTabViewDidScrollToTab:(long long)a0;
- (void)notifyPuzzleChangeMatchInfo:(id)a0;
- (id)initWithURL:(id)a0 isWeb:(BOOL)a1;
- (id)propertyKeysFromURL:(id)a0;
- (id)keysFromKeys:(id)a0 otherKeys:(id *)a1 subKeys:(id *)a2;
- (void)setupMessage;
- (void)registerMessageWithSet:(id)a0;
- (id)_currentStateWithKeys:(id)a0 otherKeys:(id)a1 stateKeyValue:(id)a2;
- (void)_stateChanged:(id)a0;
- (id)filterStateDict:(id)a0 key:(id)a1 stateKeyValue:(id)a2;
- (void)multiTabChange:(long long)a0;
- (id)logKeyForKey:(id)a0;
- (id)layeredKeysFromKey:(id *)a0;
- (id)h5Key:(id)a0;
- (void)addKeyPath:(id)a0 value:(id)a1 toStateDict:(id)a2;
- (void)registerKeys:(id)a0;
- (void)unregisterKeys:(id)a0;
- (id)currentStateWithKeys:(id)a0;
- (id)keysFromKeys:(id)a0;
- (void)updateState:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)stateDidChange:(id)a0;
- (id)initWithKeys:(id)a0;
- (id)currentState;
- (void)messageReceived:(id)a0;
- (void)addObservers;

@end
