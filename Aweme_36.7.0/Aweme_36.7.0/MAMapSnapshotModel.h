@class UIImage;

@interface MAMapSnapshotModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct MAMapPoint { double x; double y; } tlPoint;
@property (nonatomic) struct MAMapPoint { double x; double y; } trPoint;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;

@end
