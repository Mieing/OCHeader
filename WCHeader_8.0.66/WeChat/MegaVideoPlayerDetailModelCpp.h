@class NSString;

@interface MegaVideoPlayerDetailModelCpp : UnitRCObjcBaseProxyClass <MegaVideoPlayerDetailModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createModel:(id)a0 model:(id)a1;
+ (id)createListModel:(int)a0 feed:(id)a1 channel:(id)a2 commentScene:(int)a3 requestScene:(int)a4 fromSessionId:(id)a5;

- (id)openParams;
- (void)setOpenParams:(id)a0;
- (id)genOpenParams;
- (int)commentScene;
- (id)playSessionId;
- (void)setPlaySessionId:(id)a0;
- (void)updateCurrentPlayerId:(long long)a0;
- (long long)currentPlayerId;
- (id)currentChannel;
- (id)currentChannelId;
- (id)playingFeedId;
- (id)playingFeed;
- (void)setPlayingFeed:(id)a0;
- (id)nextFeedId;
- (id)nextFeed;
- (int)playingListType;
- (id)playingListModel;
- (id)listModel;
- (id)nextListModel;
- (void)setNextListModel:(id)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;

@end
