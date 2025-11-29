@class NSString;

@interface IESLiveStreamPlayerFrameDetectPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerFrameDetectPluginProtocol>

@property (copy, nonatomic) id /* block */ currentRoomSupportFrameAbnormCheckBlock;
@property (nonatomic) BOOL shouldRunBlackFrameCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (BOOL)_roomSupportFrameAbnormalCheck;
- (void)_runBlackFrameCheck;
- (BOOL)_runBlackFrameCheck:(char *)a0 width:(long long)a1 height:(long long)a2;
- (void)asyncGetCurrentPlayerViewSnapshotWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1 completion:(id /* block */)a2;
- (BOOL)_runCenterAreaBlackFramePixelCheck:(char *)a0 centerAreaRatio:(double)a1 imageWidth:(long long)a2 imageHeight:(long long)a3 pixelBlackTh:(double)a4 pictureBlackRatioTh:(double)a5;
- (BOOL)_runBlackFrameFourCornerPixelCheck:(char *)a0 width:(long long)a1 height:(long long)a2 pixelBlackTh:(double)a3 pictureBlackRatioTh:(double)a4 cornerWidthRatio:(double)a5 cornerHeightRatio:(double)a6;
- (BOOL)_runBlackFramePixelCheck:(char *)a0 fromXIndex:(long long)a1 fromYIndex:(long long)a2 width:(long long)a3 height:(long long)a4 imageWidth:(long long)a5 imageHeight:(long long)a6 pixelBlackTh:(double)a7 pictureBlackRatioTh:(double)a8 downSampleStepLength:(long long)a9;
- (double)_getLuminance:(char *)a0 pixelIndex:(int)a1;
- (void)runBlackFrameCheckIfNeeded;
- (void)stopBlackFrameCheckIfNeeded;
- (void)pe_bizHostDidInit;
- (void)pe_bizHostDealloc;
- (void)pe_viewWillAppear;
- (void)pe_viewWillDisappear;
- (void)pe_prepareForReuse;
- (void).cxx_destruct;
- (void)updateSettings;

@end
