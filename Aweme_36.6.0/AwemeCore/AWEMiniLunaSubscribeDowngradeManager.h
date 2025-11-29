@class NSString;

@interface AWEMiniLunaSubscribeDowngradeManager : NSObject <LunaSubscriberServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (BOOL)isDowngrade;
- (void)updateDowngradeStatusIfNeeded;
- (void)setUp;

@end
