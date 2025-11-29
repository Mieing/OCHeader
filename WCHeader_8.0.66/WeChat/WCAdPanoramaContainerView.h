@class NSString, WCPanoramaImageView, MMProgressViewEx;

@interface WCAdPanoramaContainerView : MMUIView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) WCPanoramaImageView *panoramaImageView;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageUrl:(id)a1 showLoading:(BOOL)a2;
- (void)initPanoramaImageView;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)dealloc;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
