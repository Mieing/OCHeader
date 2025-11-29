@class NSDictionary, NSString;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveInteractiveMediaInfoService : NSObject <HTSLiveMessageSubscriber, IESLiveKTVModeSwitchAction, IESLiveStreamConfigActions>

@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (nonatomic) long long normalAudioBitrate;
@property (nonatomic) long long ktvAudioBitrate;
@property (copy, nonatomic) NSDictionary *ktvLiveCoreInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willUpdateStreamConfigWithParams:(id *)a0;
- (void)didStartKTVWithPlayMode:(int)a0;
- (void)didEndKTVWithPlayMode:(int)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
