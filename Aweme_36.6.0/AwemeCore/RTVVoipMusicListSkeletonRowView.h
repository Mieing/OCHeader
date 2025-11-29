@class CALayer;

@interface RTVVoipMusicListSkeletonRowView : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *titleLayer;
@property (retain, nonatomic) CALayer *subtitleLayer;
@property (retain, nonatomic) CALayer *separatorLine;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
