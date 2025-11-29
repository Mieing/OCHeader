@class IESLivePlaybackPaidStreamVideoAdapter;
@protocol IESLivePaidStreamProvider;

@interface IESLivePlaybackPaidStreamCameraCreator : IESLivePlaybackPaidStreamCreator

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (retain, nonatomic) IESLivePlaybackPaidStreamVideoAdapter *videoAdapter;

+ (BOOL)creatorShouldActive:(id)a0;

- (id)extraTrackParams;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (void).cxx_destruct;

@end
