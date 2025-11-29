@interface MMFinderLiveDisplayedFeedBarrageSingletonSet : NSObject

+ (id)sharedSetContainer;
+ (id)getBarrageSeqSetForFeedLiveId:(id)a0;
+ (void)removeBarrageSeqSetForFeedLiveId:(id)a0;
+ (void)markBarrageDisplayed:(id)a0 feedLiveId:(id)a1;
+ (BOOL)checkIfBarrageDisplayed:(id)a0 feedLiveId:(id)a1;

@end
