@class CSJNativeExpressVideoAdContext, NSString, CSJRewardedRetainAlertConfig, UIView, CSJRewardAlertView, CSJMaterialMeta;

@interface CSJRewardedRetainAlertManager : NSObject

@property (copy, nonatomic) id /* block */ confirm;
@property (copy, nonatomic) id /* block */ cancel;
@property (nonatomic) long long renderIndex;
@property (retain, nonatomic) CSJRewardAlertView *backupAlertView;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) CSJRewardedRetainAlertConfig *renderSuccessConfig;
@property (nonatomic) BOOL didRemoveSKOverlay;
@property (retain, nonatomic) CSJMaterialMeta *material;
@property (copy, nonatomic) NSString *slotId;
@property (nonatomic) long long rewardLeftTime;
@property (nonatomic) long long didWatchTime;
@property (nonatomic) BOOL useBackupAlert;
@property (nonatomic) BOOL isInteracting;
@property (retain, nonatomic) CSJNativeExpressVideoAdContext *context;

- (id)reportAdExtraDict;
- (void)renderAlertWithFinish:(id /* block */)a0;
- (void)renderNativeBackupView;
- (void)onConfirmEvent:(id)a0;
- (void)onCancelEvent:(id)a0;
- (id)initWithConfirm:(id /* block */)a0 cancel:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showInView:(id)a0;

@end
