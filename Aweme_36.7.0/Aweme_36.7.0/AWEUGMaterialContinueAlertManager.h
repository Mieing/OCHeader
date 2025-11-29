@class DUXAlertDialog, NSDictionary, AWEUGMaterialAdNormalizePopupModel;

@interface AWEUGMaterialContinueAlertManager : NSObject

@property (retain, nonatomic) AWEUGMaterialAdNormalizePopupModel *popupInfo;
@property (retain, nonatomic) DUXAlertDialog *normalizePopup;
@property (nonatomic) long long type;
@property (nonatomic) double beginTime;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)sharedManager;

- (void)showPopupWithType:(long long)a0 beginTime:(double)a1 logExtra:(id)a2;
- (BOOL)checkPopInfoTrue;
- (void)confirmAction:(id)a0 completion:(id /* block */)a1;
- (void)trackAdvertisingPopupShow;
- (void)popup:(id)a0 type:(long long)a1 beginTime:(double)a2 logExtra:(id)a3;
- (void).cxx_destruct;

@end
