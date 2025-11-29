@class NSArray;

@interface IESMMSkeletonDetectResultData : IESMMAlgorithmResultData

@property (nonatomic) long long ID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) NSArray *points;

- (void).cxx_destruct;
- (id)init;

@end
