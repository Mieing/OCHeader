@class NSString;

@interface WCAdHangingPagView : WCAdPagView <WCCanvasCommonFileLoaderExt>

@property (nonatomic) BOOL indicateToPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pagInfo:(id)a1 config:(id)a2;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)appDidBecomeActive:(id)a0;
- (void)canvasCommonFileLoaderFileDidLoad:(id)a0 fileMD5:(id)a1;

@end
