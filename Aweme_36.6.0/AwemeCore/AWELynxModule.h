@class NSString;

@interface AWELynxModule : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupBulletSettings;
+ (id)localizedStringKeyForKey:(unsigned long long)a0;
+ (void)setup;

- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;

@end
