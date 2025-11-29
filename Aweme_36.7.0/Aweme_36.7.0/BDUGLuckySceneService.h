@class NSMapTable, NSMutableDictionary, NSString, NSMutableArray, NSLock;

@interface BDUGLuckySceneService : NSObject <BDUGLuckySceneServiceProtocol>

@property (retain, nonatomic) NSMutableArray *scenes;
@property (retain, nonatomic) NSMutableDictionary *pendantHelperDic;
@property (retain, nonatomic) NSMutableDictionary *extraParamsForScene;
@property (retain, nonatomic) NSMapTable *superViewMap;
@property (retain, nonatomic) NSLock *superViewLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)enter:(id)a0;
- (void)leave:(id)a0;
- (void)enter:(id)a0 superView:(id)a1;
- (void)leave:(id)a0 superView:(id)a1;
- (void)enter:(id)a0 superView:(id)a1 extra:(id)a2;
- (void)leave:(id)a0 superView:(id)a1 extra:(id)a2;
- (id)registerTask:(id)a0 scenes:(id)a1;
- (BOOL)__sceneA:(id)a0 isSelfOrChildSceneOfSceneB:(id)a1;
- (id)__needRemoveScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterTask:(id)a0;

@end
