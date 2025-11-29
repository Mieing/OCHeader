@protocol AWEPostPageReeditService;

@interface AWEPostPageSlidesReeditPreviewHandler : AWEPostPageSlidesPreviewHandler

@property (weak, nonatomic) id<AWEPostPageReeditService> reeditService;

- (void)bindServices:(id)a0;
- (void)previewImageAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
