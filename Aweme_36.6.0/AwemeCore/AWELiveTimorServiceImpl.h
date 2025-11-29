@class NSString;
@protocol AWEIronManModuleService, AWEIronManService;

@interface AWELiveTimorServiceImpl : NSObject <AWETimorEventListenerDelegate, IESLiveTimorService>

@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;
@property (retain, nonatomic) id<AWEIronManService> ironManService;
@property (copy, nonatomic) id /* block */ timorFullExitCallback;
@property (copy, nonatomic) id /* block */ timorBootCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timorSchemaCodecWithSchema:(id)a0 externalParams:(id)a1;
- (id)timorQueryAndPathFromSchema:(id)a0;
- (id)replaceIronManSchema:(id)a0 withNewStartPage:(id)a1;
- (void)showIronManODRToastWithContent:(id)a0 onController:(id)a1;
- (void)closeTimorViewController:(id)a0;
- (void)preloadTimorWithURL:(id)a0 priority:(long long)a1;
- (id)ironManTitle;
- (BOOL)isNativeAppScreenRecording;
- (void)updateLiveOpenPlatformAudienceVideoContainer:(id)a0 status:(long long)a1;
- (id)getContactIDFromSchema:(id)a0;
- (void)registerEventName:(id)a0 handler:(id /* block */)a1;
- (void)notifyAppWithContactID:(id)a0 eventName:(id)a1 jsonString:(id)a2;
- (void)createInteractCardWithContactID:(id)a0 width:(double)a1 height:(double)a2 completion:(id /* block */)a3;
- (void)operateInteractCardWithContactID:(id)a0 cardID:(id)a1 extraParams:(id)a2 type:(long long)a3;
- (void)exitInteractPluginWithContactID:(id)a0;
- (id)onLineFontWithName:(id)a0 size:(double)a1;
- (BOOL)openWithSchema:(id)a0;
- (id)schemaCodecWithSchema:(id)a0 scene:(id)a1 bdpLog:(id)a2 customParams:(id)a3;
- (void)timorFullExitEvent:(id)a0;
- (void)timorBootEvent:(id)a0;
- (void)openTimorWithSchema:(id)a0 lightScreen:(BOOL)a1 callBack:(id /* block */)a2;
- (void)addTimorEventListenerForEvent:(id)a0;
- (void)removeTimorEventListener;
- (void)openTimorWithSchema:(id)a0 externalParams:(id)a1 lightScreen:(BOOL)a2;
- (id)generateIronManSchemaWithAppID:(id)a0 startPage:(id)a1;
- (void)updateTimorAnchorConfigIfNeeded;
- (void)addTimorFullExitListener:(id /* block */)a0;
- (void)addTimorBootListener:(id /* block */)a0;
- (id)getBootNotificationName;
- (id)getExitNotificationName;
- (id)getContactIDKey;
- (void).cxx_destruct;
- (id)init;
- (void)receiveEvent:(id)a0 data:(id)a1;

@end
