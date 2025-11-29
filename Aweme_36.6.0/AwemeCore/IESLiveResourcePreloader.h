@class NSString, NSMutableDictionary;

@interface IESLiveResourcePreloader : NSObject <IESLiveResourcePreloadProtocol, IESLiveResourceLoadTraceProtocol>

@property (retain, nonatomic) NSMutableDictionary *preloadPool;
@property (retain, nonatomic) NSMutableDictionary *dataPool;
@property (nonatomic) BOOL traced;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loader;

- (void)reportWithParams:(id)a0;
- (void)prefetchAll;
- (id)componentPlistConfigData;
- (id)toolbarConfigData:(id)a0;
- (id)roomCommonContainerParserWithCache:(BOOL)a0;
- (void)loadedType:(unsigned long long)a0 name:(id)a1;
- (id)componentPlistConfigPath;
- (void)tracePrefetch:(BOOL)a0;
- (void)prefetchFiles;
- (void)prefetchImages;
- (id)toolbarConfigPath:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (id)imageList;

@end
