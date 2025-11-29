@class NSMutableDictionary, MMFinderLiveTaskId;

@interface MMFinderLiveGiftNewCustomizationCommitLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (retain, nonatomic) NSMutableDictionary *committingDict;
@property (retain, nonatomic) NSMutableDictionary *pendingDict;

- (id)initWithTaskId:(id)a0;
- (void)commitGiftNewCustomizationWithGiftProductId:(id)a0 modifyNewCustomText:(BOOL)a1 newCustomText:(id)a2 componentKeyList:(id)a3 callback:(id /* block */)a4;
- (void)tryCommitNextTaskWithGiftProductId:(id)a0;
- (id)enqueueCommitTaskWithGiftProductId:(id)a0;
- (void).cxx_destruct;

@end
