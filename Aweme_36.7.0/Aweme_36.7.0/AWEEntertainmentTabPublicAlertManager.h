@class NSString, DUXBasicSheet;
@protocol AWEEntertainmentTabPublicAlertManagerDelegate;

@interface AWEEntertainmentTabPublicAlertManager : NSObject <DUXSheetDelegate, AWEAlertProtocol>

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) id<AWEEntertainmentTabPublicAlertManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)didTapPublicButton;
- (void)didTapPrivateButton;
- (void).cxx_destruct;

@end
