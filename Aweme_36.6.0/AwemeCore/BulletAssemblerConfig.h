@class NSArray, NSString, NSDictionary, BDXResourceLoaderConfig;

@interface BulletAssemblerConfig : NSObject

@property (nonatomic) BOOL lynxBridgeEnabled;
@property (nonatomic) BOOL webBridgeEnabled;
@property (nonatomic) BOOL injectOldProtocol;
@property (nonatomic) BOOL isDevelopmentMode;
@property (retain, nonatomic) NSArray *executorClasses;
@property (copy, nonatomic) id /* block */ bridgeFilter;
@property (retain, nonatomic) BDXResourceLoaderConfig *resourceLoaderconfig;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) id /* block */ getGlobalPropsBlock;
@property (copy, nonatomic) id /* block */ appThemeBlock;
@property (copy, nonatomic) id /* block */ loadingViewBuilder;
@property (copy, nonatomic) id /* block */ failedViewBuilder;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (copy, nonatomic) NSString *customUA;

- (void).cxx_destruct;
- (id)init;

@end
