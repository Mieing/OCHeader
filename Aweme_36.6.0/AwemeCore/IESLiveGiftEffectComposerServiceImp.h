@class NSString, NSMutableDictionary;

@interface IESLiveGiftEffectComposerServiceImp : IESLiveGeneralBaseService <IESLiveGiftEffectComposerService>

@property (retain, nonatomic) NSMutableDictionary *scene2nodePaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)addEffectWithNodePaths:(id)a0 scene:(id)a1;
- (void)removeEffectWithNodePaths:(id)a0 scene:(id)a1;
- (id)currentScene2nodePaths;
- (void).cxx_destruct;

@end
