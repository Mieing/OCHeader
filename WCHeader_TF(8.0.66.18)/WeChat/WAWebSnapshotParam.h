@interface WAWebSnapshotParam : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } scrollTo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) double snapshotAfterScroll;

- (id)init;

@end
