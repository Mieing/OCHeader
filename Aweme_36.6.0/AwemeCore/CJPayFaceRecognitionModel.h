@class NSString;

@interface CJPayFaceRecognitionModel : NSObject

@property (copy, nonatomic) NSString *agreementName;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (nonatomic) unsigned long long showStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *bottomButtonText;
@property (nonatomic) BOOL shouldShowProtocolView;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL disableSignInvoke;
@property (nonatomic) BOOL disableAutoCloseOnConfirm;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *userMaskName;
@property (copy, nonatomic) NSString *alivecheckScene;
@property (nonatomic) long long alivecheckType;
@property (copy, nonatomic) NSString *extraInfo;

- (void).cxx_destruct;

@end
