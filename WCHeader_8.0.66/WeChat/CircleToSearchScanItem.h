@class ScanSearchItem;

@interface CircleToSearchScanItem : NSObject

@property (retain, nonatomic) ScanSearchItem *scanItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRect;

- (id)initWithScanItem:(id)a0 andNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
