@class NSString, UIImage, UIView;

@interface AWESearchPhotoSearchEntranceConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) double imageCornerRadius;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;

- (void).cxx_destruct;
- (id)init;

@end
