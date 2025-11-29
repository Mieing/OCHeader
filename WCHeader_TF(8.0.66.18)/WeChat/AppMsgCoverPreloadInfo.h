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

@end
