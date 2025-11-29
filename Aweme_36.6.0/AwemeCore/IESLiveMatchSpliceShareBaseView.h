@class UIImageView;

@interface IESLiveMatchSpliceShareBaseView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *qrImageView;
@property (nonatomic) BOOL needBackground;

+ (id)createPainterWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)createPainter;

- (void)addQRCodeImage:(id)a0;
- (void)beginDrawWithHandler:(id /* block */)a0;
- (void)endDrawWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
