@class NSString, NSArray, NSProgress, AWEResourceUploadParametersResponseModel;

@interface ACCBDFileUploadService : NSObject <ACCFileUploadServiceProtocol>

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *filePaths;
@property (retain, nonatomic) NSArray *images;
@property (nonatomic) unsigned long long uploadFileType;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ multiFileCompletion;
@property (nonatomic) BOOL activityFlag;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (nonatomic) BOOL isUploading;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUploading;
- (id)initImagesUploadWithParams:(id)a0 filePaths:(id)a1;
- (void)uploadFileWithProgress:(id *)a0 completion:(id /* block */)a1;
- (id)initWithUploadParams:(id)a0 filePath:(id)a1 fileType:(unsigned long long)a2;
- (void)closeUploading;
- (void)uploadMultiFileWithProgress:(id *)a0 completion:(id /* block */)a1;
- (void)startUploading;
- (void)resetProgress:(id *)a0;
- (void)configActivityFlag;
- (id)initImagesUploadWithParams:(id)a0 images:(id)a1;
- (void).cxx_destruct;

@end
