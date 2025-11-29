@class UIImage;

@interface VEAlgorithmSessionResultScanObject : NSObject

@property (retain, nonatomic) UIImage *srcImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) float prob;
@property (nonatomic) int IRLabel;
@property (nonatomic) int label;
@property (nonatomic) int objId;

- (void).cxx_destruct;
- (id)init;

@end
