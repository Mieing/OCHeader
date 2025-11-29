@class NSMutableSet, NSMutableArray;

@interface RingToneHistoryModel : NSObject {
    BOOL _continueFlag;
    BOOL _isFetching;
}

@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSMutableSet *feedIDs;
@property (retain, nonatomic) NSMutableArray *rings;

- (id)init;
- (id)fetch;
- (void)clear;
- (void)removeRingAtIndex:(unsigned long long)a0;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
