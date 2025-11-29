@class NSString, WCAdConfirmHalfScreenBaseView;
@protocol WCAdSubscriptionLogicDelegate;

@interface WCAdSubscriptionLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate>

@property (retain, nonatomic) NSString *adTitle;
@property (retain, nonatomic) NSString *adDesc;
@property (retain, nonatomic) NSString *adSubmitBtnTitle;
@property (retain, nonatomic) NSString *headImage;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView;
@property (nonatomic) BOOL btnHasBeenClicked;
@property (weak, nonatomic) id<WCAdSubscriptionLogicDelegate> delegate;
@property (retain, nonatomic) NSString *snsId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 adDesc:(id)a1 adSubmitBtnTitle:(id)a2 headImage:(id)a3 nickName:(id)a4;
- (void)start;
- (void)checkParameterAndStart;
- (BOOL)isStringEmpty:(id)a0;
- (void)callFinishedDelegateWithResult:(id)a0 success:(BOOL)a1 cancel:(BOOL)a2 errorCode:(long long)a3;
- (void)showActionSheet;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)a0;
- (void)onConfirmViewDidDisappearWithConfirmInfo:(id)a0;
- (void)updateSubscriptionLogicInfoWith:(id)a0 dataItem:(id)a1;
- (void)updateHeadInfoWithHeadUrl:(id)a0 nickname:(id)a1 title:(id)a2 adDesc:(id)a3 adSubmitBtnTitle:(id)a4;
- (BOOL)isSubscriptionInfoAllValid;
- (id)fetchSubscriptionStateMMKVKey;
- (void)setSubscriptionStateToMMKV;
- (BOOL)hasSendSubscription;
- (void).cxx_destruct;

@end
