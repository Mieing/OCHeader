@class NSString, UIView;

@interface ACCScanQRCodeScanningView : UIView <ACCScanQRCodeScanningViewStudioProxy>

@property (retain, nonatomic) UIView *scanningLineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startScanAnimation;
- (void)stopScanAnimation;
- (void)addScanningView;
- (void)setupLightViewLayer:(id)a0;
- (void)setupLineViewLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scanBorderRect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
