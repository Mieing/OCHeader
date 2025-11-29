@class NSString;

@interface AWEFeedListenFeedModuleService : HTSService <AWEFeedListenFeedModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEListenFeedAdapterClass;

- (id)listenFeedPageTitleString;
- (id)listenFeedTextString;
- (BOOL)isListenFeedPlaying;
- (id)listenFeedManager;
- (BOOL)shouldShowListenFeedWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
- (void)enterListenFeedWithModel:(id)a0 referString:(id)a1 playerController:(id)a2 enterMethod:(id)a3 enterTab:(id)a4;
- (id)listenFeedDataControllerWithEnterMethod:(id)a0 enterFrom:(id)a1 fromItemID:(id)a2;
- (id)listenFeedCollectionDataControllerWithCursor:(id)a0 models:(id)a1 hasMore:(BOOL)a2;
- (BOOL)isPodcastEnableWithRefer:(id)a0;
- (id)aAWEListenFeedAdapter;

@end
