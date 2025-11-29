@class UIImageView, NSString, CAShapeLayer;

@interface AWESearchScanCircleSearchRectView : UIView <AWESearchScanCircleSearchRectViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) double rectOutterPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)impUpdateWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupImageView;

@end
