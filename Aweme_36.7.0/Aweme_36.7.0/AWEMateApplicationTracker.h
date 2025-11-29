@class NSString;

@interface AWEMateApplicationTracker : NSObject <AWEMateTrackingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAwemeModelFriendCard:(id)a0 enterFrom:(id)a1 eventType:(id)a2;
+ (void)trackEnterFriendListWithEnterFrom:(id)a0 enterMethod:(id)a1 mateCount:(id)a2 extraParams:(id)a3;
+ (void)trackEnterMutualListWithEnterFrom:(id)a0 enterMethod:(id)a1 extraParams:(id)a2;
+ (id)getRecommendReason:(id)a0;
+ (void)trackAddFriendBtnWithEvent:(id)a0 model:(id)a1;
+ (id)toStatusString:(id)a0;
+ (void)trackEnterPersonalDetailWithEnterFrom:(id)a0 user:(id)a1 trackParams:(id)a2;
+ (void)trackClickRequestReplyWithModel:(id)a0;
+ (void)trackSendRequestReplyWithModel:(id)a0;
+ (void)trackFriendRequestCellShowWithModel:(id)a0;
+ (void)trackDeleteRequestCellWithModel:(id)a0;
+ (void)trackEnterFriendApplicationListWithEnterFrom:(id)a0 enterMethod:(id)a1 enterWithNotice:(id)a2;
+ (void)trackOBDBigCardWithEnterFrom:(id)a0 actionType:(id)a1;


@end
