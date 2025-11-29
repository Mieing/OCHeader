@class NSString, NSArray, CJPayVoucherInfoModel;
@protocol CJPayQuickPayUserAgreement;

@interface CJPayQuickPayCardModel : CJPayChannelModel

@property (copy, nonatomic) NSString *bankCardID;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSString *frontBankCode;
@property (copy, nonatomic) NSString *trueNameMask;
@property (copy, nonatomic) NSString *frontBankCodeName;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *certificateCodeMask;
@property (copy, nonatomic) NSString *certificateType;
@property (copy, nonatomic) NSString *needRepaire;
@property (copy, nonatomic) NSArray<CJPayQuickPayUserAgreement> *userAgreements;
@property (nonatomic) long long cardLevel;
@property (copy, nonatomic) NSString *perDayLimit;
@property (copy, nonatomic) NSString *perPayLimit;
@property (copy, nonatomic) NSString *withdrawMsg;
@property (copy, nonatomic) NSString *cardBinVoucher;
@property (retain, nonatomic) CJPayVoucherInfoModel *voucherInfo;
@property (nonatomic) unsigned long long comeFromSceneType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildShowConfig;
- (id)requestNeedParams;
- (void).cxx_destruct;

@end
