@class NSString, NSArray, NSDictionary;
@protocol CJPayMemAgreementModel;

@interface CJPayUnionCardInfoModel : JSONModel

@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSString *bankCardId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
