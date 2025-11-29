@class NSString;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveXPlayAudioStreamHandler : NSObject <IESLiveXPlayAudioStreamService>

@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)setupObserve;
- (void)sendAudioFrame:(id)a0 timestamp:(long long)a1;
- (void)startStreamWithAudioMixType:(long long)a0;
- (void).cxx_destruct;
- (void)stopStream;

@end
