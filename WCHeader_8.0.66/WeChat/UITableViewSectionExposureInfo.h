@interface UITableViewSectionExposureInfo : MMObject

@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } intersectionRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sectionRect;
@property (nonatomic) double exposureRatio;

@end
