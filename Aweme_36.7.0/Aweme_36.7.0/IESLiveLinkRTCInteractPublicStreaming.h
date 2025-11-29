@class IESLiveLinkRTCInteractPublicStreamAudioConfig, IESLiveLinkRTCInteractPublicStreamLayout, NSString, IESLiveLinkRTCInteractPublicStreamVideoConfig;

@interface IESLiveLinkRTCInteractPublicStreaming : NSObject

@property (retain, nonatomic) IESLiveLinkRTCInteractPublicStreamLayout *layout;
@property (retain, nonatomic) IESLiveLinkRTCInteractPublicStreamVideoConfig *video;
@property (retain, nonatomic) IESLiveLinkRTCInteractPublicStreamAudioConfig *audio;
@property (copy, nonatomic) NSString *publicStreamId;
@property (copy, nonatomic) NSString *roomId;

- (void).cxx_destruct;

@end
