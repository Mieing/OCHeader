@class OMJAspectRatio;

@interface OMJImageCropDesc : NSObject

@property (nonatomic) unsigned long long cropAspectRatioType;
@property (retain, nonatomic) OMJAspectRatio *aspectRatio;
@property (retain, nonatomic) OMJAspectRatio *originalAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
