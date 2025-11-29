@interface AppMsgCoverPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL needPreloadFold;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) unsigned int preloadTopNum;
@property (nonatomic) unsigned int preloadInterval;
@property (nonatomic) unsigned int preloadSyncGap;
@property (nonatomic) unsigned int preloadPicGap;
@property (nonatomic) unsigned int preloadPicLimit;
@property (nonatomic) BOOL needPreloadAtForeground;
@property (nonatomic) BOOL needPreloadAtChatList;
@property (nonatomic) BOOL needPreloadAtAppMsgExpose;
@property (nonatomic) BOOL needCheckTabAtForegroundPreload;

+ (void)initialize;

- (void)setNeedCheckTabAtForegroundPreload:(BOOL)a0;
- (BOOL)needCheckTabAtForegroundPreload;
- (void)setNeedPreloadAtAppMsgExpose:(BOOL)a0;
- (BOOL)needPreloadAtAppMsgExpose;
- (void)setNeedPreloadAtChatList:(BOOL)a0;
- (BOOL)needPreloadAtChatList;
- (void)setNeedPreloadAtForeground:(BOOL)a0;
- (BOOL)needPreloadAtForeground;
- (void)setPreloadPicLimit:(unsigned int)a0;
- (unsigned int)preloadPicLimit;
- (void)setPreloadPicGap:(unsigned int)a0;
- (unsigned int)preloadPicGap;
- (void)setPreloadSyncGap:(unsigned int)a0;
- (unsigned int)preloadSyncGap;
- (void)setPreloadInterval:(unsigned int)a0;
- (unsigned int)preloadInterval;
- (void)setPreloadTopNum:(unsigned int)a0;
- (unsigned int)preloadTopNum;
- (void)setNeedPreload:(BOOL)a0;
- (BOOL)needPreload;
- (void)setNeedPreloadFold:(BOOL)a0;
- (BOOL)needPreloadFold;

@end
