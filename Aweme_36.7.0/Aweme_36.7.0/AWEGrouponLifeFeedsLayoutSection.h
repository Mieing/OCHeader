@class NSArray, NSMutableArray;

@interface AWEGrouponLifeFeedsLayoutSection : NSObject

@property (retain, nonatomic) NSMutableArray *inner_nodeTagList;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) double minY;
@property (nonatomic) double maxY;
@property (readonly, nonatomic) NSArray *nodeTagList;

- (void)addNodeTag:(id)a0;
- (void).cxx_destruct;

@end
