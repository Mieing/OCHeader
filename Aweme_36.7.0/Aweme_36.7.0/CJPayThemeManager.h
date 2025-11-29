@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CJPayThemeManager : NSObject <CJPayThemeService>

@property (retain) NSDictionary *registerColorMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *colorAccessQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindToProtocol;
+ (id)cj_colorWithARGBHexString:(id)a0 defaultColor:(id)a1;
+ (id)sharedManager;

- (id)colorNamed:(id)a0 inTheme:(id)a1;
- (void)registerColorCardIfNeeded;
- (id)dynamicColorWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)colorNamed:(id)a0;

@end
