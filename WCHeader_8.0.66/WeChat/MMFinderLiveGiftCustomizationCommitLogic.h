@class NSMutableDictionary;

@interface MMFinderLiveGiftCustomizationCommitLogic : NSObject

@property (retain, nonatomic) NSMutableDictionary *commitQueues;

- (id)init;
- (void)commitChangesToGiftCustomizationModel:(id)a0 withTaskId:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
