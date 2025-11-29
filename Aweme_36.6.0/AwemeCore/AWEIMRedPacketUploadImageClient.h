@class BDUploadImageXInfo, NSString, NSArray, AWEIMRedPacketUploadConfig, NSError, BDImageXUploaderClient;

@interface AWEIMRedPacketUploadImageClient : NSObject <BDImageXUploadClientDelegate, AWEIMRedPacketUploadManagerProtocol>

@property (retain, nonatomic) AWEIMRedPacketUploadConfig *config;
@property (retain, nonatomic) BDImageXUploaderClient *client;
@property (retain, nonatomic) BDUploadImageXInfo *imageInfo;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) long long uploadProgress;
@property (copy, nonatomic) NSString *uploadId;
@property (nonatomic) BOOL needProgress;
@property (nonatomic) BOOL isUseNewDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageUploadGetNetState:(id)a0;
- (id)createImageUploadClient;
- (id)boeHandledHostName:(id)a0;
- (id)p_uploadCustomParameterString;
- (void)uploadWithContex:(id)a0 completion:(id /* block */)a1;
- (void)useNewDomain:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
