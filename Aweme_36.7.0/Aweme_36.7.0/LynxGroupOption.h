@class NSArray, NSMutableDictionary;

@interface LynxGroupOption : NSObject

@property (retain, nonatomic) NSMutableDictionary *config;
@property (retain, nonatomic) NSArray *preloadJSPaths;
@property (nonatomic) BOOL enableJSGroupThread;
@property (nonatomic) BOOL useProviderJsEnv;
@property (nonatomic) BOOL enableCanvas;

- (void)setStringConfig:(id)a0 forKey:(id)a1;
- (void)setBoolConfig:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
