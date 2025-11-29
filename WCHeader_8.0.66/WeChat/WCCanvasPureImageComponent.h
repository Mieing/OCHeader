@class WXFullScreenGestureRecognizer, UIImageView, NSMutableDictionary, NSString, WCCanvasDynamicDataLoader;

@interface WCCanvasPureImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver, FullScreenGestureDelegate, WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) UIImageView *m_imageView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *gesture;
@property (retain, nonatomic) NSMutableDictionary *qrCodeUrlUpdateDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initGesture;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onFullScreenLongPressBegin;
- (void)doScanQRCode;
- (void)loadImage:(BOOL)a0;
- (void)checkAndUpdateQrCodeUrl;
- (void)onUpdateQrCode:(id)a0 componentId:(id)a1 snsId:(id)a2;
- (void).cxx_destruct;

@end
