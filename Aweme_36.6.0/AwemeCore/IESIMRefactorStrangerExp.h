@interface IESIMRefactorStrangerExp : NSObject

@property (class, readonly, nonatomic) BOOL enableComponent;
@property (class, readonly, nonatomic) BOOL enableDestroyAsync;
@property (class, readonly, nonatomic) BOOL enablePreloadFirstFrameChat;
@property (class, readonly, nonatomic) BOOL enablePreloadFirstFrameChatAsync;
@property (class, readonly, nonatomic) double preloadDelayTime;
@property (class, readonly, nonatomic) long long saveChatsWhenExitPage;
@property (class, readonly, nonatomic) BOOL enableNotUseTrash;
@property (class, readonly, nonatomic) BOOL enableTrashPageComponent;
@property (class, readonly, nonatomic) BOOL enableFixTrashDataSource;

@end
