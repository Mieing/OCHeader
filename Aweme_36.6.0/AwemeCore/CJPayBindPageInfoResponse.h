@class NSArray, NSString, CJPayBindCardRetainInfo, NSDictionary, CJPayBindCardTitleInfoModel, CJPayVoucherListModel;
@protocol CJPayQuickBindCardModel, CJPayMemBankInfoModel;

@interface CJPayBindPageInfoResponse : JSONModel

@property (copy, nonatomic) NSArray<CJPayMemBankInfoModel> *creditBanks;
@property (copy, nonatomic) NSArray<CJPayMemBankInfoModel> *debitBanks;
@property (copy, nonatomic) NSArray<CJPayQuickBindCardModel> *oneKeyBanks;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *noPwdBindCardDisplayDesc;
@property (copy, nonatomic) NSString *voucherMsg;
@property (retain, nonatomic) CJPayVoucherListModel *voucherList;
@property (copy, nonatomic) NSString *voucherBank;
@property (copy, nonatomic) NSString *voucherBankIcon;
@property (nonatomic) BOOL isSupportOneKey;
@property (copy, nonatomic) NSString *cardNoInputTitle;
@property (retain, nonatomic) CJPayBindCardRetainInfo *retainInfo;
@property (nonatomic) long long oneKeyBanksLength;
@property (copy, nonatomic) NSString *bankListSignature;
@property (copy, nonatomic) NSDictionary *exts;
@property (nonatomic) long long recommendBanksLenth;
@property (copy, nonatomic) NSArray<CJPayQuickBindCardModel> *recommendBanks;
@property (retain, nonatomic) CJPayBindCardTitleInfoModel *recommendBindCardTitleModel;
@property (retain, nonatomic) CJPayBindCardTitleInfoModel *bindCardTitleModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
