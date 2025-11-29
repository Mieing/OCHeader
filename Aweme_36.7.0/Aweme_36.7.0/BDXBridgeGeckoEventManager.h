@class NSString;

@interface BDXBridgeGeckoEventManager : NSObject <IESGurdEventDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endNotifier;
+ (void)startNotifier;
+ (id)sharedManager;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)sendGeckoUpdatedWithEventChannel:(id)a0 version:(id)a1;

@end
