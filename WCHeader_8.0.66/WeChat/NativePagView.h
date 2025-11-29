@class NSString, PAGView, PAGFile, FlutterMethodChannel;

@interface NativePagView : NSObject <NSURLSessionDelegate, PAGViewListener, FlutterPlatformView>

@property (retain, nonatomic) PAGFile *pagFile;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) FlutterMethodChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewIdentifier:(long long)a1 arguments:(id)a2 binaryMessenger:(id)a3 methodChannel:(id)a4;
- (id)view;
- (id)resourcePath:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)onAnimationStart:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)onAnimationRepeat:(id)a0;
- (void)onAnimationUpdate:(id)a0;
- (void).cxx_destruct;

@end
