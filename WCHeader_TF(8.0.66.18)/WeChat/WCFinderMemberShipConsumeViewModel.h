@class NSString, NSTimer, NSData, WCFinderMembershipPaymentSelectView;
@protocol WCFinderMemberShipConsumeViewModelDelegate;

@interface WCFinderMemberShipConsumeViewModel : NSObject <WCFinderMembershipPaymentSelectViewDelegate, WCCoinConsumeLogicDelegate, WCFinderMembershipPaymentConfirmViewDelegate>

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *finderNickname;
@property (nonatomic) unsigned long long memberPrice;
@property (nonatomic) unsigned long long autoMemberPrice;
@property (copy, nonatomic) NSString *wecoinProductId;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (nonatomic) int reportScene;
@property (copy, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (nonatomic) BOOL autoRenewSwitch;
@property (retain, nonatomic) NSTimer *pollingTimer;
@property (retain, nonatomic) WCFinderMembershipPaymentSelectView *selectView;
@property (nonatomic) unsigned long long visitorStatus;
@property (weak, nonatomic) id<WCFinderMemberShipConsumeViewModelDelegate> delegate;
@property (nonatomic) long long qrcodeScene;
@property (copy, nonatomic) NSString *liveNoticeEncryptedId;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) unsigned long long entranceSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 finderNickname:(id)a1 memberPrice:(unsigned long long)a2 autoMemberPrice:(unsigned long long)a3 autoRenewSwitch:(BOOL)a4 wecoinProductId:(id)a5 redirectFeedID:(id)a6 reportScene:(int)a7;
- (void)updateMemberPrice:(unsigned long long)a0;
- (void)startMemberShipConsume;
- (id)genSubscribeParameter;
- (id)genConsumeParameter;
- (id)genConsumeParameterWithMode:(unsigned long long)a0;
- (void)fetchFinderMemberShipPayBillWithFinderUsername:(id)a0 subscriptionType:(unsigned long long)a1 subscriptionExtInfo:(id)a2 entranceSource:(unsigned long long)a3;
- (id)getCurrentViewController;
- (void)onfetchFinderMemberShipPayBillSuccess:(unsigned long long)a0;
- (void)onfetchFinderMemberShipPayBillFail;
- (void)startConsume:(unsigned long long)a0;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void)followContactIfNeeded;
- (void)updateVisitorStatus;
- (void)onJoinVIPButtonClicked:(unsigned long long)a0;
- (void)onMemberShipConsumeViewModelPurchaseMemberShipSuccess;
- (void)startPollingCGIWithInterval:(double)a0;
- (void)pollCGI;
- (void)stopPolling;
- (void)showPayConfirmView;
- (void)onPaymentConfirmButtonClicked;
- (void)pushVCAnimated:(id)a0 removeSelf:(BOOL)a1;
- (void)onSafeRemoveSelf;
- (void).cxx_destruct;

@end
