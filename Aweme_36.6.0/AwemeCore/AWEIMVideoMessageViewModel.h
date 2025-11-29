@class AWEIMMessageAttachmentDownloadViewModel;

@interface AWEIMVideoMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;

+ (BOOL)p_needResizeImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDrawFrameForImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

- (void)completeCoverageTaskForMessage:(id)a0 error:(id)a1;
- (void)loadVideoCoverWithImageSize:(id)a0 completion:(id /* block */)a1;
- (id)loadLocalImage:(id)a0;
- (void)p_clipAndShowImage:(id)a0 imageSize:(id)a1 completion:(id /* block */)a2;
- (BOOL)downloadVideoCoverWithCompletion:(id /* block */)a0;
- (id)p_reduceResolutionLocalImageWithAbsolutePath:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)loadInlinePic:(id)a0 imageSize:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
