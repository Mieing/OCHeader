@class NSMutableArray;

@interface AWEInteractionPreloadReuseDeque : NSObject

@property (retain, nonatomic) NSMutableArray *deque;
@property (nonatomic) unsigned long long currentIndex;

- (id)interactionPreloadModelWithIndex:(unsigned long long)a0;
- (long long)countOfDeque;
- (void)addObjectToBack:(id)a0;
- (void)addObjectToFront:(id)a0;
- (id)removeObjectFromFront;
- (id)removeObjectFromBack;
- (void)resetDeque;
- (void)backupResetDeque;
- (void)backupResetDequeV2;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;

@end
