@class AWELiteRedPacketLoginOptimizeTaskModel, AWELiteRedPacketOpenPopupInfoModel, NSString, AWELiteRedPacketUnLoginNewbieOpt, NSDictionary, AWELiteVibratorInfo, AWEIncentiveEntranceLoginPageConfig, NSNumber, AWELiteRedPacketLoginPageInfo;

@interface AWELiteRedPacketResponseModel : AWELiteBaseApiModel

@property (nonatomic) BOOL isPop;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *openPageStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *amount;
@property (nonatomic) BOOL shouldHideHighestTag;
@property (copy, nonatomic) NSString *floorAmount;
@property (copy, nonatomic) NSString *mentorUserName;
@property (copy, nonatomic) NSString *confirmUrl;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *openButtonText;
@property (copy, nonatomic) NSString *bottomTextJumpUrl;
@property (copy, nonatomic) NSString *envTopText;
@property (copy, nonatomic) NSString *envMainText;
@property (copy, nonatomic) NSString *innerDetailTopText;
@property (copy, nonatomic) NSString *innerDetailSubText;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *amountTypeText;
@property (copy, nonatomic) NSString *bottomCustomTipText;
@property (copy, nonatomic) NSString *bottomText;
@property (copy, nonatomic) NSString *popName;
@property (copy, nonatomic) NSString *bindPaymentBtnText;
@property (copy, nonatomic) NSString *bindPaymentSchema;
@property (copy, nonatomic) NSString *bindPaymentType;
@property (copy, nonatomic) NSString *aliAuthInfo;
@property (nonatomic) BOOL isInactiveBack;
@property (copy, nonatomic) NSString *bindPaymentLogKey;
@property (copy, nonatomic) NSString *bottomTextLogKey;
@property (copy, nonatomic) NSString *openButtonLogKey;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL isOldUser;
@property (retain, nonatomic) AWELiteRedPacketLoginPageInfo *loginPageInfo;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long flashSaleType;
@property (copy, nonatomic) NSString *flashSaleImageUrl;
@property (copy, nonatomic) NSString *flashSaleGoodsName;
@property (copy, nonatomic) NSString *amountTips;
@property (retain, nonatomic) AWELiteVibratorInfo *vibratorInfo;
@property (retain, nonatomic) AWELiteRedPacketUnLoginNewbieOpt *unloginNewbieOpt;
@property (nonatomic) long long countDownSecond;
@property (retain, nonatomic) AWELiteRedPacketOpenPopupInfoModel *popupInfoModel;
@property (retain, nonatomic) AWELiteRedPacketLoginOptimizeTaskModel *loginOptimizeTaskModel;
@property (nonatomic) BOOL jumpByDoneRedpack;
@property (copy, nonatomic) NSString *popRefuseReason;
@property (copy, nonatomic) NSDictionary *clientParamsConfig;
@property (retain, nonatomic) AWEIncentiveEntranceLoginPageConfig *incentiveEntranceLoginPageConfig;

+ (id)incentiveEntranceLoginPageConfigJSONTransformer;
+ (id)popupInfoModelJSONTransformer;
+ (id)loginOptimizeTaskModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)popTypeTrackValue;
- (id)positionTrackValue;
- (void).cxx_destruct;

@end
