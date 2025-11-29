@class UIColor, UIView;

@interface IESLiveGameOpenPlatformDeveloperScanView : UIView

@property (nonatomic) double scanBorderX;
@property (nonatomic) double scanBorderY;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *cornerColor;
@property (nonatomic) double cornerWidth;
@property (nonatomic) double backgroundAlpha;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initialization;

@end
