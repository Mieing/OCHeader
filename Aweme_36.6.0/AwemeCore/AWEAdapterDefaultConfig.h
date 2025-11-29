@class NSDictionary, NSCache;

@interface AWEAdapterDefaultConfig : NSObject {
    NSDictionary *_abConfig;
    NSCache *_interceptorConfig;
}

@property (nonatomic) BOOL enableInterceptorConfig;

+ (id)sharedInstance;

- (id)interceptorConfig;
- (BOOL)enableDefaultWithModuleName:(id)a0;
- (void)setEnabled:(BOOL)a0 forModuleName:(id)a1;
- (void)resetInterceptorConfig;
- (void).cxx_destruct;

@end
