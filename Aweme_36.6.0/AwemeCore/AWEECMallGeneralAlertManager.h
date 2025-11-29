@class NSString, AWEECMallGeneralAlert;

@interface AWEECMallGeneralAlertManager : NSObject

@property (nonatomic) BOOL isHandling;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL enablePopupManager;
@property (copy, nonatomic) NSString *currentPopupToken;
@property (retain, nonatomic) AWEECMallGeneralAlert *currentAlert;

+ (id)sharedManager;

- (void)cancelLastPopup;
- (void)submitMallGeneralMallAlertWithToken:(id)a0;
- (void)cancelMallGeneralMallAlertWithToken:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
