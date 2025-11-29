@class NSString;

@interface AWEStudioAssetImportServiceImpl : HTSService <AWEStudioAssetImportServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeTaskWithPathList:(id)a0 workspace:(id)a1 completion:(id /* block */)a2;

@end
