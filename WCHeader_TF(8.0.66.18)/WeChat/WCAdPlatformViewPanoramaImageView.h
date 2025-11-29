@class NSString, FlutterMethodChannel, WCAdPanoramaContainerView;

@interface WCAdPlatformViewPanoramaImageView : WCAdPlatformViewBase

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *canvasKey;
@property (retain, nonatomic) NSString *componentId;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (retain, nonatomic) WCAdPanoramaContainerView *panoramaContainerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (id)view;
- (void)handleJsEvent:(id)a0 params:(id)a1 needCallback:(BOOL)a2 result:(id /* block */)a3;
- (void).cxx_destruct;

@end
