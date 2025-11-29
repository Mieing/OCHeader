@class NSMutableIndexSet;

@interface WCFinderDiffFeedModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableIndexSet *removals;
@property (retain, nonatomic) NSMutableIndexSet *insertions;

- (void).cxx_destruct;

@end
