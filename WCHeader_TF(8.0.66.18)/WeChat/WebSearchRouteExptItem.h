@class NSString;

@interface WebSearchRouteExptItem : NSObject

@property (copy, nonatomic) NSString *liteAppId;
@property (copy, nonatomic) NSString *liteAppPage;
@property (copy, nonatomic) NSString *liteAppQuery;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *exptKey;
@property (copy, nonatomic) NSString *extInfo;
@property (copy, nonatomic) NSString *preloadParams;
@property (nonatomic) BOOL preloadLiteApp;
@property (copy, nonatomic) NSString *enterType;
@property (nonatomic) BOOL checkUpdate;
@property (nonatomic) BOOL syncCheckUpdate;
@property (copy, nonatomic) NSString *minVersion;
@property (nonatomic) unsigned long long keepAliveSeconds;

- (id)init;
- (BOOL)useLiteApp;
- (BOOL)useLiteAppWithHitExptReport:(BOOL)a0;
- (id)pageId;
- (void).cxx_destruct;

@end
