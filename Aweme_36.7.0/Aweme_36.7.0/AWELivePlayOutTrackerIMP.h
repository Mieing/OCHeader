@class NSString;
@protocol IESLiveDouPlusService;

@interface AWELivePlayOutTrackerIMP : NSObject <IESLivePlayOuterTrackerService>

@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1 trackContext:(id)a2;
- (void)livePlayForRoom:(id)a0 anchor:(id)a1 enterFromAdType:(id)a2 trackContext:(id)a3 isInnerStream:(BOOL)a4;
- (void)recLivePlayForRoom:(id)a0 anchor:(id)a1 enterFromAdType:(id)a2 trackContext:(id)a3 isInnerStream:(BOOL)a4;
- (void)trackReceiveLiveInner:(id)a0;
- (void)trackEnterAdLiveRoomFailWithContext:(id)a0;
- (void)trackAdDislikeReasonInnerLive:(id)a0;
- (id)getHeartBrokenImageView;
- (id)getFeedbackBadImageView;
- (BOOL)enableLiveFeedBackDislike;
- (void).cxx_destruct;

@end
