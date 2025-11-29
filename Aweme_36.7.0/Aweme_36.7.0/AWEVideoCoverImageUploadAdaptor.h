@class NSDictionary;
@protocol ACCFileUploadServiceProtocol;

@interface AWEVideoCoverImageUploadAdaptor : NSObject

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (copy, nonatomic) NSDictionary *checkAuthParams;

+ (void)trackWithError:(id)a0;

- (id)compressImage:(id)a0;
- (id)initWithCheckAuthParams:(id)a0;
- (void)uploadImage:(id)a0 needCompress:(BOOL)a1 completion:(id /* block */)a2;
- (void)uploadImageByMaxResolution:(id)a0 maxResolution:(double)a1 completion:(id /* block */)a2;
- (void)checkAuthWithCompletion:(id /* block */)a0;
- (id)compressImageByMaxResolution:(id)a0 maxResolution:(double)a1;
- (void).cxx_destruct;

@end
