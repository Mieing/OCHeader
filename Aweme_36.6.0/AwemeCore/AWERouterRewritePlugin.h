@protocol AWERouterRewritePluginDataSource;

@interface AWERouterRewritePlugin : NSObject

@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AWERouterRewritePluginDataSource> dataSource;

+ (id)sharedPlugin;

- (id)rewriteURL:(id)a0;
- (void).cxx_destruct;

@end
