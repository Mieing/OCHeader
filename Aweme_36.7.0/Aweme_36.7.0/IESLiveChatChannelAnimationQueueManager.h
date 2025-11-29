@class IESLiveChatChannelAnimationPlayer, NSString, IESLiveChatChannelAnimationQueue;
@protocol IESLiveEmoticonResource;

@interface IESLiveChatChannelAnimationQueueManager : NSObject <IESLiveChatChannelAnimationPlayerDelegate>

@property (retain, nonatomic) IESLiveChatChannelAnimationQueue *queue;
@property (nonatomic) double lastEnqueueTime;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) IESLiveChatChannelAnimationPlayer *animationPlayer;
@property (nonatomic) BOOL disableQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueItem:(id)a0;
- (void)handleAssetMessage:(id)a0;
- (void)handleEmoticonModel:(id)a0;
- (void)didFinishedPlayingWithfinishedItem:(id)a0 error:(id)a1;
- (void)handleGiftAnimationItem:(id)a0;
- (void)handleGreetAnimationItem:(id)a0;
- (void)checkQueueAndPlayItem;
- (void)prepareResourceForItem:(id)a0 completion:(id /* block */)a1;
- (void)playGreetAnimationItemIfNeeded:(id)a0;
- (void)preloadEffectResource:(id)a0 completion:(id /* block */)a1;
- (void)playAnimationItemIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
