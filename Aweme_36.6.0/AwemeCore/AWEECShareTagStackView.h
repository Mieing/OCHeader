@interface AWEECShareTagStackView : UIStackView

@property (nonatomic) BOOL shouldHideOutBoundsView;
@property (nonatomic) double maxWidth;

- (void)layoutSubviews;

@end
