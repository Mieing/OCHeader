@class UIColor;

@interface IESLiveRecordProgressView : UIView

@property (nonatomic) unsigned long long style;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progerssColor;
@property (retain, nonatomic) UIColor *progerssBackgroundColor;
@property (nonatomic) double progerWidth;
@property (nonatomic) double backGroundWidth;

- (void)drawCircleProgress:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectProgress:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
