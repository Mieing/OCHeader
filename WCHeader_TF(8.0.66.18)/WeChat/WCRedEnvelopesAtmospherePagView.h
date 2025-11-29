@class WCPayWebPagView, WCRedEnvelopesControlData, NSString;

@interface WCRedEnvelopesAtmospherePagView : UIView <PAGViewListener, WCPayWebPagViewDelegate>

@property (retain, nonatomic) WCRedEnvelopesControlData *m_data;
@property (retain, nonatomic) WCPayWebPagView *atmospherePagView;
@property (nonatomic) BOOL shouldStopAtNextLoop;
@property (nonatomic) double bottomY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andData:(id)a1 bottomY:(double)a2;
- (void)initView;
- (void)layoutSubviews;
- (void)onLoadWCPayWebPagOK:(id)a0;
- (void)stop;
- (void)playPag;
- (void)playDetailPag;
- (void)stopAndRemove;
- (void)fadeStopAndRemove;
- (void)onAnimationEnd:(id)a0;
- (id)demoPagFile;
- (void).cxx_destruct;

@end
