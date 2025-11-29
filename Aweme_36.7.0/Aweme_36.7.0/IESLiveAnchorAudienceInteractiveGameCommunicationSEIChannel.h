@class NSMutableDictionary, IESLiveGCDTimer;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveAnchorAudienceInteractiveGameCommunicationSEIChannel : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double timeVal;
@property (retain, nonatomic) NSMutableDictionary *loopSEIKeyMap;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> realStreamingProvider;

- (void)doTimerAction;
- (void)sendSingleSEIMsgWithKey:(id)a0 model:(id)a1;
- (void)sendSEIMsgWithKey:(id)a0 value:(id)a1 interval:(long long)a2 updateSEIInfoBlock:(id /* block */)a3;
- (void)stopSEIChannelCommunication;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimerWithInterval:(double)a0;

@end
