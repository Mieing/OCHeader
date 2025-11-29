@class NSString, NSDictionary;
@protocol AWEHPChannelBadgeModelProtocol, AWEMessageReachFrameConfigProtocol;

@interface AWEConcernRedDotController : NSObject <AWEUserMessage, AWEMessageReachChannelControllerProtocol, AWEConcernRedDotControllerProtocol>

@property (retain, nonatomic) id<AWEHPChannelBadgeModelProtocol> currentBadgeModel;
@property (nonatomic) BOOL isBubbleDemote;
@property (nonatomic) BOOL isRequestAfterLogout;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSDictionary *bubbleInfoCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AWEMessageReachFrameConfigProtocol> config;
@property (nonatomic) unsigned long long enterDotType;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)cleanFollowLiveBubbleIfNeed;
- (BOOL)isRedDotShowing;
- (id)convertJsonToExtraModel:(id)a0;
- (id)redDotTypeWithBadgeModel:(id)a0;
- (void)trackRedDotShowWithNoticeType:(id)a0;
- (unsigned long long)calculateDotEnterType:(id)a0 extra:(id)a1;
- (void)recordFrequencyWithExtraModel:(id)a0 cacheType:(long long)a1;
- (long long)notifyModeWithGroup:(long long)a0;
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
- (void)clearEnterDotType;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
