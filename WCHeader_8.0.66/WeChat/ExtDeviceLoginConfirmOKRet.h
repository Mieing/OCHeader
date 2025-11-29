@class NSString;

@interface ExtDeviceLoginConfirmOKRet : WXPBGeneratedMessage

@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSString *contentStr;
@property (retain, nonatomic) NSString *buttonOkStr;
@property (retain, nonatomic) NSString *buttonCancelStr;
@property (nonatomic) unsigned int reqSessionLimit;
@property (nonatomic) unsigned int confirmTimeOut;
@property (retain, nonatomic) NSString *loginedDevTip;
@property (retain, nonatomic) NSString *titleStr;
@property (retain, nonatomic) NSString *warningStr;
@property (retain, nonatomic) NSString *usageLink;
@property (retain, nonatomic) NSString *spamSecondVerifyUrl;
@property (nonatomic) unsigned int multiDeviceTipsType;
@property (retain, nonatomic) NSString *multiDeviceTipsStr;
@property (nonatomic) BOOL showPrivacyAgreement;

+ (void)initialize;

@end
