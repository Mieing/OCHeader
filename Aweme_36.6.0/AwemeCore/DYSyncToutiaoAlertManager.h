@class NSString, NSMutableDictionary;

@interface DYSyncToutiaoAlertManager : NSObject <DYSyncToutiaoAlertManagerProtocol>

@property (nonatomic) BOOL needShowAlert;
@property (retain, nonatomic) NSMutableDictionary *requestRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)alertViewControllerWith:(long long)a0 clickedSwitchType:(long long)a1 platformType:(unsigned long long)a2 requestAction:(id /* block */)a3;
- (BOOL)showSyncProfileAlert;
- (BOOL)couldShowAlertOnCurrentVC;
- (void)postSyncProfileWith:(BOOL)a0;
- (void)showSyncProfileAlertIfNeeded;
- (void)showAlertIfNeededWithShowedCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
