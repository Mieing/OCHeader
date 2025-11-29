@class BDSHEngine;

@interface BDALokiSheoContainerView : BDALokiContainerView

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) BDSHEngine *sheoEngine;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;

- (double)getFinalLengthWithMode:(long long)a0 contentLength:(double)a1 containerLength:(double)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
