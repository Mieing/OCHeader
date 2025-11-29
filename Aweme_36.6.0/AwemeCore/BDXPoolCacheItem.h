@class NSString, NSMutableArray, NSTimer;

@interface BDXPoolCacheItem : NSObject <NSDiscardableContent>

@property (retain, nonatomic) NSMutableArray *containerList;
@property (copy, nonatomic) NSString *identifer;
@property (nonatomic) BOOL evictedOnBackground;
@property (weak, nonatomic) NSTimer *clearTimer;
@property (nonatomic) double triggerClearTime;

- (void)discardContentIfPossible;
- (void).cxx_destruct;
- (BOOL)isContentDiscarded;
- (id)init;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end
