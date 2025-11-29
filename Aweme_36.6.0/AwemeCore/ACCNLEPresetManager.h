@class NSString;

@interface ACCNLEPresetManager : NSObject <NPLoggerDelegate, NPMonitorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enable;

+ (void)configPreset;
+ (id)sharedManager;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)log:(id)a0 type:(long long)a1;
- (id)init;

@end
