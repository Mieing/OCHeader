@interface BDPGamePermissionContainerView : UIView

@property (nonatomic) struct CGSize { double width; double height; } cornerRadii;
@property (nonatomic) unsigned long long rectCorner;

- (void)layoutSubviews;

@end
