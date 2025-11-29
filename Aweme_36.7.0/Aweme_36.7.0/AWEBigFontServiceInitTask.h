@class NSString;

@interface AWEBigFontServiceInitTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBigFontModuleAdapterClass;
+ (BOOL)setupElderModeWithDelayEffect;
+ (void)setupCustomTabBarHeight;
+ (void)execute;

- (id)aAWEBigFontModuleAdapter;

@end
