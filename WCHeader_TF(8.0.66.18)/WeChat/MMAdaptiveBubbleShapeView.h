@class UIImageView;

@interface MMAdaptiveBubbleShapeView : MMUIView

@property (retain, nonatomic) UIImageView *mainPartBgImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) struct CGSize { double width; double height; } mainPartContentViewSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } mainPartContentViewEdgeInsets;
@property (nonatomic) double arrowImageViewRight;

- (id)init;
- (void)setupMainPartImageView;
- (void)setupArrowImageView;
- (void)layoutSubviews;
- (void)relayoutAllSubviews;
- (void).cxx_destruct;

@end
