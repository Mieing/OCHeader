@class NSString, MMFinderLiveFrontEndPreviewView;

@interface WAFinderLiveView : WANativeView <MMFinderLiveFrontEndPreviewViewChannel>

@property (retain, nonatomic) MMFinderLiveFrontEndPreviewView *liveView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)onInsertWithParam:(id)a0;
- (id)onUpdateWithParam:(id)a0;
- (id)onRemoveWithParam:(id)a0;
- (void)layoutSubviews;
- (void)sendEvent:(id)a0 data:(id)a1;
- (void)onLiveCDNPlayerItem:(id)a0 pixelBufferRendered:(struct __CVBuffer { } *)a1;
- (void).cxx_destruct;

@end
