@class UIImageView, MMFinderLiveImageTextLabelParams, UILabel, MMWebImageView;

@interface MMFinderLiveImageTextLabelView : MMUIView

@property (retain, nonatomic) MMWebImageView *leftImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) MMFinderLiveImageTextLabelParams *params;

+ (double)widthWithParams:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithParams:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
