@class IESLiveStableModeStrategy, NSMutableArray;

@interface IESLiveDanmakuMessageFilter : NSObject

@property (nonatomic) BOOL degradeForScreenChat;
@property (retain, nonatomic) IESLiveStableModeStrategy *stableModelStrategy;
@property (nonatomic) BOOL isStableModeEnable;
@property (retain, nonatomic) NSMutableArray *msgMutuallyExclusiveMsgWithCarnival;

- (BOOL)filterMessage:(id)a0;
- (void)startAnchorStableModeStrategy;
- (void)stopAnchorStableModeStrategy;
- (void)configStableModeStrategy;
- (id)carnivalMutexMessages;
- (BOOL)shouldMutexWithCarnival:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
