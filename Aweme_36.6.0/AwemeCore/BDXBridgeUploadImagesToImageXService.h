@class NSArray, NSMutableDictionary, NSString, BDImageXUploaderClient;

@interface BDXBridgeUploadImagesToImageXService : BDXBridgeUploadToVODBaseService <BDImageXUploadClientDelegate>

@property (retain, nonatomic) NSMutableDictionary *infos;
@property (copy, nonatomic) NSArray *filePaths;
@property (retain, nonatomic) BDImageXUploaderClient *uploaderClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (id)initWithParamModel:(id)a0;
- (void).cxx_destruct;

@end
