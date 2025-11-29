@class NLEVESkeletonRect, NSArray;

@interface NLESkeletonInfoSingleResult : NSObject

@property (nonatomic) int ID;
@property (retain, nonatomic) NLEVESkeletonRect *rect;
@property (retain, nonatomic) NSArray *points;

- (void).cxx_destruct;
- (id)init;

@end
