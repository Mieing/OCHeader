@class NSString;
@protocol ACCFileUploadServiceProtocol;

@interface ACCEditFrameUploadServiceImpl : NSObject <ACCEditFrameUploadServiceProtocol>

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorOfUploadImage;
+ (BOOL)enablePreupload;

- (void)uploadFrameForImagePath:(id)a0 toRecommendTos:(BOOL)a1 completion:(id /* block */)a2;
- (void)getCoverImageForModel:(id)a0 completion:(id /* block */)a1;
- (void)saveImage:(id)a0 toFilePath:(id)a1 completion:(id /* block */)a2;
- (void)uploadFramesWithModel:(id)a0 recommendTos:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
