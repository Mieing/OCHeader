@class MMFinderLiveReplayMessagePage;
@protocol MMFinderLiveReplayMessageCacheDelegate;

@interface MMFinderLiveReplayMessageCache : NSObject

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) MMFinderLiveReplayMessagePage *mostRecentlyUsedPage;
@property (retain, nonatomic) MMFinderLiveReplayMessagePage *leastRecentlyUsedPage;
@property (nonatomic) BOOL isNotPrependInfo;
@property (weak, nonatomic) id<MMFinderLiveReplayMessageCacheDelegate> delegate;

- (id)initWithPageCapacity:(unsigned long long)a0;
- (void)addPage:(id)a0;
- (id)frameAtTimeOffset:(unsigned int)a0 combinePreviousFramesInPage:(BOOL)a1 peek:(BOOL)a2;
- (BOOL)hasPageContainingFrameAtTimeOffset:(unsigned int)a0;
- (void)removePage:(id)a0;
- (id)pageContainingFrameAtTimeOffset:(unsigned int)a0 updateAccessOrder:(BOOL)a1;
- (void)evaluateAndRaisePagePrefetchNotificationForTimeOffsetAt:(unsigned int)a0;
- (void).cxx_destruct;

@end
