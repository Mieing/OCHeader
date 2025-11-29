@class NSMutableArray;

@interface QBBeaconDataPersistQueue : NSObject {
    NSMutableArray *tailList;
    int maxSize;
    int currSize;
}

+ (id)sharedInstance;

- (id)init;
- (void)setMaxSize:(int)a0;
- (int)getMaxSize;
- (int)getCurrSize;
- (void)addObject:(id)a0;
- (void)addToTailList:(id)a0;
- (id)fetchAllObjectsAndClean;
- (void)dealloc;
- (void).cxx_destruct;

@end
