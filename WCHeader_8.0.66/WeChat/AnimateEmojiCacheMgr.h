@class NSString, NSCache;

@interface AnimateEmojiCacheMgr : MMUserService <NSCacheDelegate, MMServiceProtocol>

@property (copy, nonatomic) NSString *currentRoomID;
@property (nonatomic) unsigned long long lastMsgTime;
@property (nonatomic) unsigned long long lastLocalID;
@property (retain, nonatomic) NSCache *cache;
@property (nonatomic) unsigned int realCacheCout;
@property (nonatomic) unsigned int realCacheFrameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onStartAnimateEmojiCheckPoint:(id)a0;
- (void)onEndAnimateEmojiCheckPoint:(id)a0;
- (void)onUpdateAnimateEmojiCheckPoint:(id)a0 contact:(id)a1 fromHistory:(BOOL)a2;
- (BOOL)shouldAutoPlayAnimateEmoji:(id)a0 roomID:(id)a1;
- (id)getFramesForAnimateEmojiNode:(id)a0;
- (id)getAnimatedImage:(id)a0;
- (id)animatedImageOfDecodedFrames:(id)a0;
- (void)onEnterRoom:(id)a0;
- (void)onEixtRoom:(id)a0;
- (void)onAddMsg:(id)a0 roomID:(id)a1;
- (void)onAddHistoryLastMsg:(id)a0 roomID:(id)a1;
- (BOOL)isSameRoomID:(id)a0;
- (void)recordCacheChange:(id)a0 incr:(BOOL)a1;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;

@end
