@class NSDictionary, NSString;
@protocol AWEMessageReachFrameConfigProtocol;

@interface AWELiveRedDotController : NSObject <AWEMessageReachChannelControllerProtocol>

@property (retain, nonatomic) NSDictionary *bubbleInfoCache;
@property (readonly, nonatomic) id<AWEMessageReachFrameConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordFrequencyWithExtraModel:(id)a0 cacheType:(long long)a1;
- (BOOL)canRequestMessageReachDataWithParamsModel:(id)a0;
- (id)startRequestMessageReachDataWithWithParamsModel:(id)a0;
- (id)canShowMessageReachDataWithParamsModel:(id)a0 componentModel:(id)a1;
- (void)updateMessageReachShowingModelWithParamsModel:(id)a0 componentModel:(id)a1;
- (id)getBizTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
- (void)showBadgeCallbackWithContext:(id)a0;
- (void)hideBadgeCallbackWithContext:(id)a0;
- (void)downgraBadgeCallbackWithContext:(id)a0;
- (void)showBubbleCallbackWithContext:(id)a0;
- (void)dismissBubbleCallbackWithContext:(id)a0;
- (BOOL)clickBubbleCallbackWithContext:(id)a0;
- (void)cleanRedDotData;
- (id)extractAckTypeFrom:(id)a0;
- (BOOL)isFollowComponentId:(id)a0;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithConfig:(id)a0;

@end
