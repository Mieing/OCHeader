@class NSString, NSDictionary;

@interface MultiDeviceLoginInfo : NSObject

@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSString *confirmButtonTitle;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *warningTips;
@property (retain, nonatomic) NSString *deviceTips;
@property (nonatomic) unsigned int sessionCountLimit;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) long long responseType;
@property (nonatomic) unsigned int functionBit;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString *usageURL;
@property (retain, nonatomic) NSString *spamSecondVerifyURL;
@property (nonatomic) unsigned int deviceState;
@property (retain, nonatomic) NSString *multiDeviceTips;
@property (retain, nonatomic) NSString *autoLoginSwitchTip;
@property (nonatomic) unsigned int deviceClientVersion;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL showSyncChat;
@property (nonatomic) BOOL showPrivacyAgree;
@property (retain, nonatomic) NSString *URLString;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSDictionary *extInfo;

- (id)initWithURLString:(id)a0 fromScene:(unsigned int)a1 extInfo:(id)a2;
- (id)deviceIconImage;
- (BOOL)showSyncChatEntrance;
- (BOOL)shouldSelectSyncChatByDefault;
- (BOOL)showAutoLoginEntrance;
- (BOOL)isAutoLoginEnabled;
- (void).cxx_destruct;

@end
