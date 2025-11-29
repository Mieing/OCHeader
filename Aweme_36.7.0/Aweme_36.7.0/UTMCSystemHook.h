@class NSString, NSMutableArray;

@interface UTMCSystemHook : NSObject {
    NSMutableArray *mObservers;
}

@property (retain, nonatomic) NSString *appState;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (void)appDidFinishLaunching:(id)a0;
- (void)appBecameActive:(id)a0;
- (void)appDIdEnterBackground:(id)a0;
- (void)appUpdateTimer:(id)a0;
- (void)checkAppState;
- (void)switchBackground:(id)a0;
- (void)detach:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)attach:(id)a0;
- (void)start;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
