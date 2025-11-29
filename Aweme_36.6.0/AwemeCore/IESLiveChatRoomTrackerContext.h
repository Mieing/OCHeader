@class NSString, NSNumber, NSDictionary;

@interface IESLiveChatRoomTrackerContext : NSObject <IESLiveChatRoomTrackerContext>

@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *connectType;
@property (copy, nonatomic) NSString *applyRequestPage;
@property (nonatomic) BOOL isAutoJoin;
@property (nonatomic) BOOL isAudioMode;
@property (nonatomic) BOOL isFansGuide;
@property (nonatomic) BOOL isCandidate;
@property (copy, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *fromUserType;
@property (nonatomic) unsigned long long overType;
@property (copy, nonatomic) NSString *breakPage;
@property (copy, nonatomic) NSString *refuseType;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *guestConnectMode;
@property (nonatomic) BOOL isInvited;
@property (copy, nonatomic) NSString *clickSource;
@property (nonatomic) BOOL addedToAlternateList;
@property (nonatomic) double connectTime;
@property (nonatomic) BOOL isKTV;
@property (nonatomic) int distributeSetting;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *cameraDuration;
@property (nonatomic) double talkDuration;
@property (nonatomic) BOOL adminSwitch;
@property (nonatomic) BOOL fansApplySwitch;
@property (nonatomic) BOOL applyApproveSwitch;
@property (nonatomic) BOOL enbaleStrongRemind;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) BOOL isPaidLinkmicJoinChannel;
@property (nonatomic) long long money;
@property (nonatomic) long long time;
@property (copy, nonatomic) NSString *applyReason;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *songID;
@property (copy, nonatomic) NSString *storeClickSource;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) long long paidLinkmicAddPrice;
@property (nonatomic) long long rechargePrice;
@property (nonatomic) BOOL isRealPaidLinkmic;
@property (copy, nonatomic) NSDictionary *paidQueueParams;
@property (copy, nonatomic) NSString *paidLinkmicDiscountType;
@property (copy, nonatomic) NSString *rechargeableLabel;
@property (copy, nonatomic) NSString *rechargeableIntro;
@property (copy, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (nonatomic) double applyTime;
@property (nonatomic) double invitedTime;
@property (nonatomic) double sucConnectTime;
@property (nonatomic) long long waitingDuration;
@property (nonatomic) long long watchDuration;
@property (nonatomic) BOOL isInPK;
@property (copy, nonatomic) NSDictionary *commonConnectParams;
@property (nonatomic) BOOL trackForSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
