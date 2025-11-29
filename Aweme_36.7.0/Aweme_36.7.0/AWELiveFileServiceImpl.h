@class NSString, NSMutableDictionary;
@protocol AWEStorageServiceFileKitFileManagerInterface;

@interface AWELiveFileServiceImpl : NSObject <IESLiveFileService>

@property (retain, nonatomic) id<AWEStorageServiceFileKitFileManagerInterface> fileManager;
@property (retain, nonatomic) NSMutableDictionary *pathResourceMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)loadResourceMetrics:(id)a0;
- (void)resourceAccess:(id)a0 rootPath:(id)a1;
- (void)resourceRemove:(id)a0 rootPath:(id)a1;
- (void)resourceCreate:(id)a0 rootPath:(id)a1;
- (void)resourceUpdate:(id)a0 rootPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
