@class NSString, NSMutableArray, VEReadWriteLock;

@interface VEUnitObject : IESMMObject <IVEUnitObject>

@property (retain, nonatomic) VEReadWriteLock *rwLock;
@property (retain, nonatomic) NSMutableArray *downStreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downStreamsCopy;
- (void)addDownStream:(id)a0;
- (void)removeAllDownStreams;
- (void)addDownStream:(id)a0 atIndex:(long long)a1;
- (void)removeDownStream:(id)a0;
- (void)removeDownStreamAtIndexs:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
