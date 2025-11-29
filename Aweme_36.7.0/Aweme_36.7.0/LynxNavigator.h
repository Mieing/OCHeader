@class NSMutableArray;
@protocol LynxSchemaInterceptor;

@interface LynxNavigator : NSObject {
    NSMutableArray *_innerCardManagerStack;
}

@property (readonly, nonatomic) long long capacity;
@property (retain, nonatomic) id<LynxSchemaInterceptor> interceptor;

+ (id)sharedInstance;

- (BOOL)onNavigateBack;
- (void)registerLynxHolder:(id)a0 initLynxView:(id)a1;
- (id)getCurrentCardManager;
- (void)setSchemaInterceptor:(id)a0;
- (void)registerLynxHolder:(id)a0;
- (void)unregisterLynxHolder:(id)a0;
- (void)navigate:(id)a0 withParam:(id)a1;
- (void)replace:(id)a0 withParam:(id)a1;
- (void).cxx_destruct;
- (void)setCapacity:(long long)a0;
- (id)init;
- (void)goBack;
- (void)didEnterBackground:(id)a0;
- (void)didEnterForeground:(id)a0;

@end
