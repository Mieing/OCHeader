@class UIImage, NSMutableDictionary, NSString;

@interface OMJImageThumbnailProvider : NSObject <OMJThumbnailProvider> {
    struct XPath { struct unique_ptr<XPathOpaque, std::default_delete<XPathOpaque>> { struct __compressed_pair<XPathOpaque *, std::default_delete<XPathOpaque>> { struct XPathOpaque *__value_; } __ptr_; } _opaque; } _imageFilePath;
}

@property (nonatomic) unsigned long long state;
@property (retain) NSMutableDictionary *resultHandlersByTaskID;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) struct CGSize { double width; double height; } maxPixelSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageFileClip:(struct SharedPtr<XMFImageFileClip> { struct XMFImageFileClip *x0; })a0 maxPixelSize:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;
- (long long)requestThumbnailAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 resultHandler:(id /* block */)a1;
- (long long)requestThumbnailAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 resultHandler:(id /* block */)a1;
- (void)notifyDidCompleteDecodingImage:(struct SharedPtr<XIKImage> { struct XIKImage *x0; })a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)cancelTask:(long long)a0;
- (void)cancelAllTasks;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
