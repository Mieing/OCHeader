@class AFDSnackBar, NSDictionary, NSString, AWEUserModel;

@interface AFDIMGreetHelper : NSObject <AWEUserMessage, AFDIMGreetHelperProtocol, AWEAlertProtocol>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AFDSnackBar *curSnackBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_showSendMessageSuccessToastForUser:(id)a0;
+ (void)showLeaveMsgSnackBarWithUser:(id)a0 trackParams:(id)a1 continueBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)trackFollowCardMessageSnackbar:(id)a0 eventType:(id)a1;
+ (void)showLeaveMsgAlertWithUser:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
+ (void)updateDefaultMsg:(id)a0;
+ (void)sendGreetMsg:(id)a0 user:(id)a1;
+ (void)trackLeaveMsg:(id)a0 trackParams:(id)a1;
+ (void)showNoAvatarLeaveMsgAlertWithUser:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (id)defaultMsgText;
+ (id)defaultMsgTextKey;
+ (void)sendLightInteractionMsgWithUser:(id)a0 trackParams:(id)a1;
+ (void)showLeaveMsgSnackBarWithUser:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
+ (void)showLeaveMsgAlertWithUser:(id)a0 trackParams:(id)a1;
+ (id)shareInstance;

@end
