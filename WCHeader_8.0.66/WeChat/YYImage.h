@class UIImage, YYSentinel, NSObject;
@protocol YYImageDelegate, OS_dispatch_semaphore;

@interface YYImage : UIImage {
    id /* block */ m_getBlock;
    BOOL m_isDecodingInBackground;
    NSObject<OS_dispatch_semaphore> *m_lock;
    YYSentinel *m_sentinel;
}

@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) UIImage *decodeImageLM;
@property (retain, nonatomic) UIImage *decodeImageDM;
@property (nonatomic) BOOL isDynamicImg;
@property (nonatomic) struct CGSize { double width; double height; } prefertSize;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *decodeImage;
@property (weak, nonatomic) id<YYImageDelegate> delegate;

+ (id)imageWithBlock:(id /* block */)a0;
+ (id)imageWithUIImage:(id)a0;
+ (id)imageWithBlock:(id /* block */)a0 prefertSize:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithUIImage:(id)a0 prefertSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithBlock:(id /* block */)a0 prefertSize:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;
- (BOOL)isDarkMode;
- (void)asyncLoad;
- (void)_cancelAsyncLoad;
- (void)_loadInBackground;
- (id)_fourceDecodeImage:(id)a0 prefertSize:(struct CGSize { double x0; double x1; })a1 isCancelled:(id /* block */)a2;
- (void).cxx_destruct;

@end
