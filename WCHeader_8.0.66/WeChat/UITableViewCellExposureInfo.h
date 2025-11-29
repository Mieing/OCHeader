@class NSIndexPath;

@interface UITableViewCellExposureInfo : MMObject

@property (retain, nonatomic) NSIndexPath *cellViewIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } intersectionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellViewRect;
@property (nonatomic) double exposureRatio;

- (void).cxx_destruct;

@end
