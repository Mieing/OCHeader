@class NSString, IESLivePlaybackPaidStreamVideoAdapter;
@protocol IESLivePaidStreamProvider;

@interface IESLivePlaybackPaidStreamLiveCreator : IESLivePlaybackPaidStreamCreator <IESLivePaidStreamPlugin>

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (retain, nonatomic) IESLivePlaybackPaidStreamVideoAdapter *videoAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)creatorShouldActive:(id)a0;

- (id)extraTrackParams;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStreamAuthWillStart:(id)a0;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 retSource:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)handlePaidLiveDataMessage:(id)a0;
- (long long)paidScene;
- (id)customPlugins;
- (void)paidStreamCreate:(unsigned long long)a0 paidObject:(id)a1;
- (id)currentPaidStream;
- (void)paidStreamUnmount;
- (void).cxx_destruct;

@end
