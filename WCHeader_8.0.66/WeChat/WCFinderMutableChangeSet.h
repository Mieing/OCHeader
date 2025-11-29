@interface WCFinderMutableChangeSet : WCFinderChangeSet

+ (id)mutableChangeSet;

- (id)init;
- (void)setInserts:(id)a0;
- (void)setRemoves:(id)a0;
- (void)setUpdates:(id)a0;
- (id)inserts;
- (id)removes;
- (id)updates;

@end
