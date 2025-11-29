@class NSMutableDictionary, AWEHPUIDispatchQueue;

@interface AWEHPFeedChannelLauncher : NSObject

@property (retain, nonatomic) NSMutableDictionary *channelQueues;
@property (retain, nonatomic) AWEHPUIDispatchQueue *allChannelQueue;
@property (nonatomic) BOOL channelBuildCompleted;

+ (id)sharedLauncher;

- (void)registerAllChannelBuildFinishHandler:(id /* block */)a0;
- (void)registerHandler:(id /* block */)a0 forTabID:(id)a1;
- (void)fireChannelQueueWithTabID:(id)a0;
- (id)getQueueWithTabID:(id)a0;
- (void)fireAllChannelQueue;
- (void)finishChannelBuild;
- (void).cxx_destruct;
- (id)init;

@end
