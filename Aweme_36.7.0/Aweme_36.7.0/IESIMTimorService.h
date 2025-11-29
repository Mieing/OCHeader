@class NSString;
@protocol AWEIronManService;

@interface IESIMTimorService : HTSService <IESIMTimorService>

@property (retain, nonatomic) id<AWEIronManService> ironManService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ironManTrackScene;
- (id)oneCardSupportSchemaConfig;
- (void)available:(id /* block */)a0 unavailable:(id /* block */)a1;
- (id)appIDFromSchema:(id)a0;
- (id)timorSchemaCodecWithSchema:(id)a0 appendLog:(id)a1 error:(id *)a2;
- (id)timorSchemaCodecWithSchema:(id)a0 externalParams:(id)a1;
- (void)preloadIronManWithSchemaString:(id)a0;
- (void)openOneCardWithView:(id)a0 schema:(id)a1;
- (BOOL)isIronManSchema:(id)a0;
- (id)gameModelIronManCenter;
- (BOOL)isIronManURLString:(id)a0;
- (BOOL)isMiniGameOnTop;
- (void)preloadIronManWithSchema:(id)a0;
- (BOOL)isTimorMsgNotice:(id)a0 url:(id)a1 type:(long long)a2;
- (id)getMessageModel:(id)a0 timorURL:(id)a1 deleteModel:(id)a2 trackDic:(id)a3;
- (void)messageActionSheetDismiss;
- (BOOL)isTimorUpdateSubscribe;
- (void)saveImageWithImage:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (id)customFieldsWithBDPSchemaCodecFromString:(id)a0 error:(id *)a1;
- (BOOL)openPresentStyleWithSchema:(id)a0;
- (id)timorSchemaCodecWithSchema:(id)a0 timorQueryKey:(id)a1;
- (id)ironManSchemaHost;
- (id)spiderManSchemaHost;
- (id)schemaCodecOptionsFromSchema:(id)a0 error:(id *)a1;
- (id)createShareGameModel;
- (id)convertSceneIfNeed:(id)a0;
- (id)timorSceneKey;
- (id)timorLocationKey;
- (id)timorLaunchFromKey;
- (BOOL)isRV;
- (BOOL)isNviBDPRootNavigationController:(id)a0;
- (void)saveVideoWithFileURL:(id)a0 withPrivacyCert:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
