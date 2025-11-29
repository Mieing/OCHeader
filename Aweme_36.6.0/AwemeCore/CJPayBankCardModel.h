@class NSString;

@interface CJPayBankCardModel : JSONModel

@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSString *signNo;
@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardNoMask;
@property (copy, nonatomic) NSString *mobileMask;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *identityType;
@property (copy, nonatomic) NSString *identityCodeMask;
@property (copy, nonatomic) NSString *perdayLimit;
@property (copy, nonatomic) NSString *perpayLimit;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *quickPayMark;
@property (copy, nonatomic) NSString *cardBackgroundColor;
@property (copy, nonatomic) NSString *channelIconUrl;
@property (nonatomic) BOOL needResign;
@property (nonatomic) BOOL isSmallStyle;
@property (copy, nonatomic) id /* block */ createNormalOrderAndSendSMSBlock;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (BOOL)propertyIsIgnored:(id)a0;

- (void).cxx_destruct;

@end
