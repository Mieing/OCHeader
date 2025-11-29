@class IESliveComponentBatchItem, NSMutableSet;

@interface IESLiveComponentBatchInfo : NSObject

@property (retain, nonatomic) IESliveComponentBatchItem *headBatchItem;
@property (retain, nonatomic) NSMutableSet *allComponentNames;
@property (retain, nonatomic) IESliveComponentBatchItem *currentBatchItem;
@property (nonatomic) BOOL finished;

- (void)goNext;
- (void)deleteLinkItem:(id)a0;
- (BOOL)containCurrentWithName:(id)a0;
- (void)setUpRealComponents:(id)a0;
- (void)recordComponentList:(id)a0;
- (void)deleteItemNames:(id)a0 insertItem:(id)a1 isHead:(BOOL)a2;
- (BOOL)canLoadCurrent;
- (void).cxx_destruct;
- (id)init;

@end
