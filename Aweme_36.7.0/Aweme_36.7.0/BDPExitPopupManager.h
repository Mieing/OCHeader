@class NSString, NSMutableDictionary;

@interface BDPExitPopupManager : NSObject <BDPBootLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *revisitInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)presentViewControllerIfNeededWithUniqueID:(id)a0 exitAction:(id /* block */)a1;
- (BOOL)_hasShownInLifeCycle:(id)a0;
- (void)_recordLaunchTimeInLifeCycle:(id)a0;
- (void)prepareRevisitEdu:(id)a0;
- (void)prepareGoLive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
