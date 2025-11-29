@interface VEAlgorithmSessionResultObjTrack : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) float prob;
@property (nonatomic) int label;
@property (nonatomic) int trackId;

@end
