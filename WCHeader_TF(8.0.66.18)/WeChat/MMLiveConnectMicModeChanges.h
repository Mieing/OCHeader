@class MicSetting_PurchaseMicSetting;

@interface MMLiveConnectMicModeChanges : NSObject

@property (nonatomic) BOOL wasPaidMic;
@property (nonatomic) BOOL isPaidMic;
@property (nonatomic) BOOL wasConnectMic;
@property (nonatomic) BOOL isConnectMic;
@property (nonatomic) BOOL wasMicTalking;
@property (nonatomic) BOOL isMicTalking;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *paidMicSettingOld;
@property (retain, nonatomic) MicSetting_PurchaseMicSetting *paidMicSettingNew;

- (BOOL)micModeChanged;
- (void).cxx_destruct;

@end
