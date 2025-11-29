@class NSString, NSMutableDictionary;

@interface LiteAppWAProvideApiHelperManager : NSObject <WAProvideApiDelegate, WAAppTaskMgrExt>

@property (retain, nonatomic) NSMutableDictionary *helpers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)getApiHelper:(id)a0 viewController:(id)a1 appUuid:(unsigned int)a2;
- (void)releaseApiHelper:(id)a0 appUuid:(unsigned int)a1;
- (void)releaseAllApiHelper;
- (void)onApiEndResult:(id)a0 Name:(id)a1 Param:(id)a2 CallbackId:(unsigned int)a3;
- (void)onApiSendEvent:(id)a0 Name:(id)a1 Param:(id)a2;
- (void)onAppTaskTerminate:(id)a0;
- (void).cxx_destruct;

@end
