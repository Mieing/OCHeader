@class NSString;

@interface AWEFeedCountTimerRulesDOUYINAdapter : NSObject <AWEFeedCountTimerRulesDOUYINAdapter>

@property (nonatomic) unsigned long long curAlbumBrowserPageNumber;
@property (nonatomic) BOOL triggerBrowserCounting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)setReadTaskItemID:(id)a0;
- (id)currentBrowserAlbumPageIDWithAlbumID:(id)a0;
- (void)startCountingForAlbumConsume:(id)a0 isBrowser:(BOOL)a1 isAutoLoopPlay:(BOOL)a2;
- (void)resumeCountingForVideoConsume;
- (void)startCountingForVideoConsume:(id)a0 itemID:(id)a1;
- (void)stopCountingForVideoConsume:(id)a0 reachTimeLimit:(BOOL)a1;
- (void)stopCountingForAlbumConsume:(id)a0 isBrowser:(BOOL)a1 reachTimeLimit:(BOOL)a2;
- (void)albumBrowserPageNumberDidUpdate:(unsigned long long)a0 albumID:(id)a1 triggerBrowserPageCounting:(BOOL)a2;
- (id)weakTarget;

@end
