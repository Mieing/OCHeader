@class UIImageView;

@interface GCDragDecorateView : UIView

@property (retain, nonatomic) UIImageView *decorateView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isDragged;

- (void)setUpUI;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
