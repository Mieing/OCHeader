@interface AWEStudioHandsFreeDotsView : UIView

@property (nonatomic) struct CGSize { double width; double height; } lastSize;

- (void)reloadDots;
- (void)layoutSubviews;

@end
