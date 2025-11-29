@class NSString, BDPUniqueID, WKWebView;
@protocol BDPInnerScreenRecorderProtocol;

@interface BDPWKGameScreenRecorderHolder : NSObject <BDPScreenRecorderProtocol> {
    id<BDPInnerScreenRecorderProtocol> _recorder;
}

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) WKWebView *webview;
@property (retain, nonatomic) NSString *mediaRecorderSolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoPause;
- (void)trimWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getElapseTime:(id /* block */)a0;
- (void)stop:(id /* block */)a0 async:(BOOL)a1;
- (void)receiveCanvasImage:(id)a0 completion:(id /* block */)a1;
- (void)setupAudioConfig:(unsigned long long)a0 bps:(unsigned long long)a1 sampleRate:(unsigned long long)a2;
- (void)doAudioSample:(void *)a0 length:(int)a1;
- (void)setSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)start:(long long)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop:(id /* block */)a0;
- (void)resume;
- (id)initWithUniqueID:(id)a0;

@end
