@class NSString, AnyPromise;
@protocol SendThanksResultDelegate;

@interface EcsGiftSendThanksLogicViewController : MMUIViewController <SendThanksConfirmSheetViewDelegate, EcsTipsSheetViewDelegate>

@property (nonatomic) BOOL alreadyShow;
@property (retain, nonatomic) AnyPromise *requestThanksInfoPromise;
@property (retain, nonatomic) NSString *thanksOrder;
@property (retain, nonatomic) NSString *giverNickName;
@property (retain, nonatomic) NSString *chatTargetName;
@property (retain, nonatomic) id<SendThanksResultDelegate> delegate;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)handleTap;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleRequestThanksInfoError;
- (void)showSendConfirm;
- (void)showHasThanksTips:(id)a0;
- (BOOL)checkCanSendThanks:(id)a0;
- (id)requestThanksInfo;
- (void)reportSendResult:(BOOL)a0;
- (void)dismissMyself;
- (BOOL)isIllegalString:(id)a0;
- (void)OnSendThanksConfirmSheetViewSend:(id)a0;
- (void)OnSendThanksConfirmSheetViewCancel:(id)a0;
- (void)OnSendThanksConfirmSheetViewClose:(id)a0;
- (void)OnSheetViewClose:(id)a0;
- (void)OnIknowClick:(id)a0;
- (void).cxx_destruct;

@end
