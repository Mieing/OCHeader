@class NSString;

@interface IESLiveScreenAutoLockService : NSObject <IESLiveScreenAutoLockInterface>

@property (nonatomic) long long allowAutoLockStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)disableAutoLockWithIdentifier:(id)a0;
- (void)enableAutoLockWithIdentifier:(id)a0;
- (void)rac_initializer;
- (id)init;
- (BOOL)isIdleTimerDisabled;

@end
