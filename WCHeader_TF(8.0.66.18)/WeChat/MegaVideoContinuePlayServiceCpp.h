@class NSString;

@interface MegaVideoContinuePlayServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoContinuePlayService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updatePlayingFeed:(id)a0 commentScene:(int)a1 isFromContinuePlay:(BOOL)a2;
- (id)playingFeed;
- (id)playingFeedId;
- (int)commentScene;
- (id)nextFeed;
- (id)nextFeedId;
- (void)updateRelatedListLastBuffer:(id)a0;
- (void)prefetchNextFeed;

@end
