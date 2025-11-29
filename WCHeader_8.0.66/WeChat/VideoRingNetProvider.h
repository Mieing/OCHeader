@interface VideoRingNetProvider : NSObject

- (id)searchMusicRingWithQuery:(id)a0 offset:(unsigned int)a1 searchID:(unsigned long long)a2;
- (id)setRingToneWithType:(unsigned long long)a0 ring:(id)a1 userName:(id)a2 op:(unsigned long long)a3 scene:(unsigned long long)a4 extraInfo:(id)a5;
- (id)setMessageRingType:(unsigned int)a0;
- (id)promiseAllExclusiveRingsWithSequence:(unsigned long long)a0;
- (id)fetchRingToneDetailForFriend:(id)a0 selfIsCaller:(BOOL)a1;
- (id)fillUpFinderItemForRing:(id)a0 useCache:(BOOL)a1;
- (id)getMyGlobalRingTone;
- (id)applyRingToneProcess:(unsigned long long)a0 withRing:(id)a1;

@end
