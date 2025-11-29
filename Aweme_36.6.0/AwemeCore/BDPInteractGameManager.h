@class NSString;

@interface BDPInteractGameManager : NSObject <BDPAppPreloadMessage>

@property (copy, nonatomic) id /* block */ preloadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyInteractEventDidChangeWithWithAppID:(id)a0 eventName:(id)a1 data:(id)a2;
+ (void)preloadWithSchema:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)sharedManager;

- (id)launchWithSchema:(id)a0 container:(id)a1 delegate:(id)a2 config:(id)a3;
- (void)appPreloadFinishedWithModel:(id)a0 schema:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
