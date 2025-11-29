@class NSString;

@interface ACCSelfieImageProcessAndUploadService : NSObject <ACCSelfieImageProcessAndUploadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadImage:(id)a0 andVerfyWithCompletion:(id /* block */)a1;
- (id)resizeImage:(id)a0 withNewSize:(struct CGSize { double x0; double x1; })a1;

@end
