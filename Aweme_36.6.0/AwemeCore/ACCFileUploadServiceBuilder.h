@protocol ACCFileUploadServiceProtocol;

@interface ACCFileUploadServiceBuilder : NSObject

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;

- (id)createUploadServiceWithParams:(id)a0 filePath:(id)a1 fileType:(unsigned long long)a2;
- (id)createUploadServiceWithParams:(id)a0 filePaths:(id)a1;
- (id)createAudioUploadServiceWithParams:(id)a0 authParams:(id)a1 filePath:(id)a2 fileType:(unsigned long long)a3;
- (id)createImageUploadServiceWithParams:(id)a0 images:(id)a1;
- (unsigned long long)p_transBDUploadFileType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
