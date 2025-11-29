@interface PSTNComponent : NSObject

@property (nonatomic) struct PSTNChannelAdapter { void /* function */ **x0; id x1; } *mChannelAdapter;
@property (nonatomic) struct PSTNNetNotifier { void /* function */ **x0; id x1; } *mNetNotifier;
@property (nonatomic) struct ITransportChannel { void /* function */ **x0; } *mTransChannel;
@property (nonatomic) struct IMVQQEngine { void /* function */ **x0; } *mMVEngine;
@property (nonatomic) int mEngineChid;

- (id)init;
- (void)dealloc;

@end
