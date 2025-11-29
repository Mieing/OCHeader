@class NSString, MMFinderLiveFootageReplayModel, NSData, MMFinderLiveReplayMessageCache;
@protocol MMFinderLiveReplayMessageSourceDelegate;

@interface MMFinderLiveReplayMessageSource : NSObject <MMFinderLiveReplayMessageCacheDelegate>

@property (retain, nonatomic) MMFinderLiveReplayMessageCache *messageCache;
@property (nonatomic) unsigned int lastRequestEndOffset;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL fetching;
@property (nonatomic) unsigned int startOffset;
@property (nonatomic) unsigned int maxTimeOffset;
@property (nonatomic) BOOL initialCommentItemsPrepended;
@property (copy, nonatomic) NSString *liveDesc;
@property (nonatomic) int scenario;
@property (retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel;
@property (weak, nonatomic) id<MMFinderLiveReplayMessageSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScenario:(unsigned long long)a0 startOffset:(unsigned int)a1 endOffset:(unsigned int)a2;
- (id)initWithScenario:(unsigned long long)a0;
- (id)initWithFootageReplayModel:(id)a0;
- (id)frameItemForTime:(unsigned int)a0 combinePreviousFramesInPage:(BOOL)a1;
- (void)updateLiveDesc:(id)a0;
- (void)fetchMessagesAtTime:(unsigned int)a0;
- (void)onPageStarvingForTimeOffsetAt:(unsigned int)a0;
- (void)onPagePrefetchSuggestedForTimeOffsetAt:(unsigned int)a0;
- (void).cxx_destruct;

@end
