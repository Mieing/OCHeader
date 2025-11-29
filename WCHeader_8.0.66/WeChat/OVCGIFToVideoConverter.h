@protocol OVCGIFToVideoConverterDelegate;

@interface OVCGIFToVideoConverter : NSObject {
    struct SharedPtr<XVCGIFToVideoConverter> { struct XVCGIFToVideoConverter *_ptr; } _backingConvertor;
}

@property (weak, nonatomic) id<OVCGIFToVideoConverterDelegate> delegate;

- (id)init;
- (void)startConvertingWithGIFFilePath:(id)a0 toVideo:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelConverting;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
