@class NSString;

@interface FlutterFilePlugin : NSObject <MMFlutterPlugin, FlutterFileHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)createDirectoryPath:(id)a0 recursive:(BOOL)a1 completion:(id /* block */)a2;
- (void)createFilePath:(id)a0 completion:(id /* block */)a1;
- (id)getDefaultImageCacheDirectoryWithError:(id *)a0;
- (id)getRealPathPath:(id)a0 error:(id *)a1;
- (id)getGeneralCacheDirectoryWithError:(id *)a0;
- (id)getStreamProfilerDirectoryRelease:(BOOL)a0 error:(id *)a1;

@end
