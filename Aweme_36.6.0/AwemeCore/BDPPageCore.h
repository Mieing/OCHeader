@class NSString, BDPUniqueID, BDPPageConfig;

@interface BDPPageCore : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long pageId;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *originPagePath;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSString *openType;
@property (nonatomic) BOOL isPreloadPage;
@property (retain, nonatomic) BDPPageConfig *pageConfig;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isAppPageReady;
@property (nonatomic) BOOL isPreloadFrame;
@property (nonatomic) BOOL didRecordDOMReady;
@property (nonatomic) BOOL isSubscribeReady;
@property (nonatomic) BOOL isFPPage;

- (void)onAppRouteWithParams:(id)a0;
- (void)preloadWithCPRulesIfNeeded;
- (id)pathFramePath;
- (void)readPageFile:(id)a0 isExtend:(BOOL)a1 completion:(id /* block */)a2;
- (void)readPageFile:(id)a0 from:(long long)a1 pluginName:(id)a2 completion:(id /* block */)a3;
- (long long)pagePathSource;
- (void)handleLoadError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
