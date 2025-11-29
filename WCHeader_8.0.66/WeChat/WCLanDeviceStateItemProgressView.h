@class CAShapeLayer;

@interface WCLanDeviceStateItemProgressView : UIView {
    CAShapeLayer *m_shapeLayer;
}

@property (nonatomic) double progress;

+ (id)progressView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initShapeLayer;
- (void)completeAnimate:(BOOL)a0;
- (void).cxx_destruct;

@end
