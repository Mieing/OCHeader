@class NSString, NSDictionary, CJPayBindCardVoucherInfo;

@interface CJPayQuickBindCardModel : JSONModel

@property (copy, nonatomic) NSString *bankCode;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *orderAmount;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *bankCardId;
@property (copy, nonatomic) NSDictionary *voucherInfoDict;
@property (copy, nonatomic) NSString *selectedCardType;
@property (copy, nonatomic) NSString *bankRank;
@property (copy, nonatomic) NSString *jumpBankType;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *bankInitials;
@property (copy, nonatomic) NSString *bankPopularFlag;
@property (copy, nonatomic) NSString *bankSortNum;
@property (copy, nonatomic) NSString *isSupportOneKey;
@property (copy, nonatomic) NSString *voucherMsg;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *debitBindCardVoucherInfo;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *creditBindCardVoucherInfo;
@property (retain, nonatomic) CJPayBindCardVoucherInfo *unionBindCardVoucherInfo;
@property (readonly, nonatomic) BOOL isUnionBindCard;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)activityInfoWithCardType:(id)a0;
- (void).cxx_destruct;

@end
