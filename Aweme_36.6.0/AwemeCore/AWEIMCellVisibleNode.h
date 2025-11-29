@interface AWEIMCellVisibleNode : NSObject

@property (nonatomic) unsigned long long dataHash;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

@end
