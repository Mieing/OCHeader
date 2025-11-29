@class NSNumber, NSString, AWELiteVibratorInfo;

@interface AWELiteRedPacketDoneModel : AWELiteBaseApiModel

@property (retain, nonatomic) NSNumber *amount;
@property (retain, nonatomic) NSNumber *openPageStyle;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *amountTypeText;
@property (copy, nonatomic) NSString *innerDetailTopText;
@property (copy, nonatomic) NSString *innerDetailSubText;
@property (copy, nonatomic) NSString *openButtonText;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *bottomText;
@property (copy, nonatomic) NSString *bottomTextJumpUrl;
@property (nonatomic) BOOL isInactiveBack;
@property (copy, nonatomic) NSString *bindPaymentLogKey;
@property (copy, nonatomic) NSString *bottomTextLogKey;
@property (copy, nonatomic) NSString *openButtonLogKey;
@property (copy, nonatomic) NSString *bindPaymentBtnText;
@property (copy, nonatomic) NSString *bindPaymentSchema;
@property (copy, nonatomic) NSString *bindPaymentType;
@property (copy, nonatomic) NSString *aliAuthInfo;
@property (retain, nonatomic) AWELiteVibratorInfo *vibratorInfo;
@property (copy, nonatomic) NSString *landingUrl;
@property (nonatomic) long long landingType;
@property (copy, nonatomic) NSString *clientLocalCache;
@property (copy, nonatomic) NSString *targetPage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
