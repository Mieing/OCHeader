@class UIImageView, MMUILabel;

@interface MMLiveWeCoinLabel : MMUIView

@property (retain, nonatomic) UIImageView *wecoinIconView;
@property (retain, nonatomic) MMUILabel *wecoinIconLabel;
@property (nonatomic) double padding;

- (void)layoutSubviews;
- (void)layoutUI;
- (void)setWecoin:(unsigned int)a0 textFont:(id)a1 iconSize:(struct CGSize { double x0; double x1; })a2 padding:(double)a3;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
