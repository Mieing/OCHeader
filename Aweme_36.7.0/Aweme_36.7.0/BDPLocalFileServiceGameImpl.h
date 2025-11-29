@class NSString;

@interface BDPLocalFileServiceGameImpl : NSObject <BDPLocalFileService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;

- (id)initService;
- (id)getAllNativeGamesLocalFileInfoList;
- (id)getAllSCGamesLocalFileInfoList;
- (void)updateLocalFileInfoWithDict:(id)a0 path:(id)a1 key:(id)a2;
- (id)scSizeInfo;
- (unsigned long long)indexedDBFileSizeOfPath:(id)a0;

@end
