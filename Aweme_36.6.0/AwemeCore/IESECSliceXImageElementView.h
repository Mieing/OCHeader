@class UIColor, NSString, UIImageView, UIImage;

@interface IESECSliceXImageElementView : IESECSliceXBaseContentElementView

@property (copy, nonatomic) NSString *previousImageURL;
@property (nonatomic) double previousImageAspectRatio;
@property (retain, nonatomic) UIColor *previousTintColor;
@property (retain, nonatomic) UIImage *previousOriginImage;
@property (retain, nonatomic) UIImageView *contentImageView;

+ (void)initialize;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)stopAnimatingIfNeeded;
- (void)startAnimatingIfNeeded;
- (void)setImage:(id)a0 tintColor:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancel;

@end
