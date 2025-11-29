@class UIImage;

@interface AWEHPTopTabItemIndicatorIconUIModel : NSObject

@property (nonatomic) double distance;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL inRight;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL rotation;
@property (nonatomic) BOOL adjustTint;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImage *unselectedImage;

- (void).cxx_destruct;

@end
