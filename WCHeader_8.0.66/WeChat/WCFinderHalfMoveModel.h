@class NSString, NSMutableArray;

@interface WCFinderHalfMoveModel : NSObject

@property (nonatomic) BOOL halfScreenIsShow;
@property (retain, nonatomic) NSMutableArray *halfScreenMoveProgressArray;
@property (nonatomic) double haflScreenHeightPercent;
@property (copy, nonatomic) NSString *bindFeedId;

- (id)init;
- (double)videoLastHalfScreenMoveProgress;
- (double)videoCurHalfScreenMoveProgress;
- (BOOL)halfScreenProgressArrayIsFull;
- (BOOL)isOnHalfState;
- (void).cxx_destruct;

@end
