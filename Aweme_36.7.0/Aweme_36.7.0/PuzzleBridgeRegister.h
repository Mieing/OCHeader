@class NSString, NSArray;
@protocol IESHYHybridViewProtocol;

@interface PuzzleBridgeRegister : NSObject <BDXBridgeProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *puzzleBackupHandlers;
@property (retain, nonatomic) NSArray *puzzleRegisterHandlers;
@property (retain, nonatomic) NSArray *lazyLoadWhiteListHandlers;
@property (nonatomic) BOOL disableInjectXbridge;
@property (copy, nonatomic) id /* block */ willRegisterBlock;
@property (copy, nonatomic) id /* block */ didRegisterBlock;
@property (retain, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (retain, nonatomic) NSArray *injectedHandlers;
@property (nonatomic) BOOL ignoreNewMethods;
@property (nonatomic) BOOL ignoreLegacyMethods;

+ (id)globalMethodList;
+ (void)registerPuzzleBridgeEngine;
+ (id)methodNameToClassNameDic;

- (void)applyOptimizationForMethodsFromEngineView:(id)a0 queryItems:(id)a1;
- (BOOL)shouldPreloadNewPiperHandler:(id)a0;
- (BOOL)shouldPreloadLegacyPiperHandler:(id)a0;
- (void)registerMethodsWithBridge:(id)a0 inContainer:(id)a1;
- (id)getRegisteredAllHandlers;
- (id)_getRegisteredAllHandlers:(BOOL)a0 excludeBackupHandlers:(BOOL)a1;
- (id)__convertNamesToInstances:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end
