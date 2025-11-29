@class NSString, NSMutableSet, NSMutableDictionary;
@protocol IESHYHybridViewProtocol, PuzzleKitViewStateCenterCapbility;

@interface PuzzleKitViewStateCenter : NSObject <PuzzleStateObserver, PuzzleHybridStateCenterProtocol>

@property (weak, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (retain, nonatomic) NSMutableSet *customStateKeys;
@property (retain, nonatomic) NSMutableSet *puzzleStorageKeys;
@property (retain, nonatomic) NSMutableDictionary *layeredKeyMap;
@property (retain, nonatomic) NSString *logPath;
@property (retain, nonatomic) id<PuzzleKitViewStateCenterCapbility> capbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyKeysFromURL:(id)a0;
- (id)keysFromKeys:(id)a0 otherKeys:(id *)a1 subKeys:(id *)a2;
- (id)_currentStateWithKeys:(id)a0 otherKeys:(id)a1 stateKeyValue:(id)a2;
- (id)filterStateDict:(id)a0 key:(id)a1 stateKeyValue:(id)a2;
- (id)logKeyForKey:(id)a0;
- (id)layeredKeysFromKey:(id *)a0;
- (void)addKeyPath:(id)a0 value:(id)a1 toStateDict:(id)a2;
- (void)registerKeys:(id)a0;
- (void)unregisterKeys:(id)a0;
- (id)currentStateWithKeys:(id)a0;
- (id)keysFromKeys:(id)a0;
- (id)initWithKitView:(id)a0 capbility:(id)a1;
- (void)configWithCapbility:(id)a0 keys:(id)a1;
- (id)currentStorageStateKeys;
- (id)currentCustomStateKeys;
- (void)updateState:(id)a0;
- (void).cxx_destruct;
- (void)stateDidChange:(id)a0;
- (id)currentState;
- (void)addObservers;

@end
