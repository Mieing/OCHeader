@class NSString;

@interface MMLiveMagicEngineResourcePathPlugin : NSObject <MMFinderLiveResPathManagerProtocol>

@property (retain, nonatomic) NSString *rootId;
@property (retain, nonatomic) NSString *suffixName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootId:(id)a0 suffixName:(id)a1;
- (id)cacheFolder;
- (id)tempCacheFolder;
- (id)cachePath:(id)a0;
- (id)resPath:(id)a0;
- (id)unzipPath:(id)a0;
- (id)zipPath:(id)a0;
- (void).cxx_destruct;

@end
