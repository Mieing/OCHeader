@class NSString, AWEAntiAddictDailyAlertConfigModel, DUXContentSheet, AWEAlertContext;
@protocol AWEAntiAddictDailyAlertDelegate;

@interface AWEAntiAddictDailyAlert : NSObject <DUXSheetDelegate, AWEAntiAddictDailyAlertViewControllerDelegate, AWEMessageReachPopViewProtocol>

@property (nonatomic) unsigned long long viewType;
@property (nonatomic) BOOL isDay;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ didConsume;
@property (retain, nonatomic) DUXContentSheet *alertSheet;
@property (retain, nonatomic) AWEAntiAddictDailyAlertConfigModel *configModel;
@property (copy, nonatomic) NSString *dismissTransferToSchema;
@property (nonatomic) BOOL shouldDismissManually;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (weak, nonatomic) id<AWEAntiAddictDailyAlertDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)didClickConfirmButton;
- (void)didClickMaskView;
- (id)createAlertSheetWithVC:(id)a0 Height:(double)a1;
- (void)didClickCancelButton;
- (void)didClickLinkText:(id)a0;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (id)initWithTimeType:(BOOL)a0 viewType:(unsigned long long)a1 configModel:(id)a2;
- (void).cxx_destruct;
- (void)dismissAlert;
- (void)viewControllerDidDismiss:(id)a0;

@end
