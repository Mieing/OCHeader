@class NSArray, IESLivePlaybackPaidStreamVideoAdapter, NSString, UIView, NSDictionary;
@protocol IESLivePaidStreamProvider, IESLiveVideoPreviewPlayerData, IESPlaybackVideoPaidDelegate, IESLivePaidStreamService;

@interface IESPlaybackPaidStreamControl : NSObject <IESLivePaidStreamPlugin, IESLiveMessageSubscriber, IESPlaybackPaidStreamSearchProvider>

@property (weak, nonatomic) id<IESLivePaidStreamService> paidStreamService;
@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (copy, nonatomic) NSArray *plugins;
@property (retain, nonatomic) id<IESLiveVideoPreviewPlayerData> episode;
@property (retain, nonatomic) IESLivePlaybackPaidStreamVideoAdapter *videoAdapter;
@property (weak, nonatomic) UIView *trialView;
@property (weak, nonatomic) UIView *trialContainerView;
@property (nonatomic) long long playbackSource;
@property (weak, nonatomic) id<IESPlaybackVideoPaidDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isInFreeTrialFinish) BOOL inFreeTrialFinish;
@property (copy, nonatomic) NSDictionary *logExtra;

- (void)didSetAttachingDIContext;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStream:(id)a0 didFinishTrialWithReason:(unsigned long long)a1;
- (void)paidStream:(id)a0 actionForBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)paidStream:(id)a0 manualPromiseWithCompletionHandler:(id /* block */)a1;
- (void)paidStream:(id)a0 didChangeAuthRetType:(unsigned long long)a1 retSource:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void)paidStream:(id)a0 didChangeAuthPromiseType:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)installPaidStream;
- (void)handleChannelMessage:(id)a0;
- (void)installPlugins:(id)a0;
- (id)updateWithEpisode:(id)a0;
- (void)messageReceived:(id)a0 source:(id)a1;
- (void)updateTimeInPlaybackForDistribute:(double)a0;
- (void)startInPlaybackForDistribute;
- (id)basicPlugins;
- (id)initWithtrialView:(id)a0 andContainerView:(id)a1 andPlaybackSource:(long long)a2;
- (void)finishInPlaybackForDistribute;
- (long long)getCurrentPaidChannel;
- (void)uninstall;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
