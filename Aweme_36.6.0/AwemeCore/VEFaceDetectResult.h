@class NSArray;

@interface VEFaceDetectResult : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) float score;
@property (retain, nonatomic) NSArray *pointsArray;

- (void).cxx_destruct;

@end
