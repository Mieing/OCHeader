@class CJPayErrorButtonInfo, NSString, NSArray, CJPayBDRetainInfoModel, NSDictionary, CJPaySubPayTypeInfoModel, CJPayMerchantInfo;

@interface CJPayHintInfo : JSONModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *failType;
@property (copy, nonatomic) NSString *subStatusMsg;
@property (copy, nonatomic) NSArray *voucherBankIcons;
@property (retain, nonatomic) CJPaySubPayTypeInfoModel *recPayType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *subButtonText;
@property (retain, nonatomic) CJPayBDRetainInfoModel *retainInfo;
@property (retain, nonatomic) NSString *styleStr;
@property (readonly, nonatomic, getter=style) unsigned long long style;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (copy, nonatomic) NSString *topRightDescText;
@property (nonatomic) long long tradeAmount;
@property (copy, nonatomic) NSString *failPayTypeMsg;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (copy, nonatomic) NSString *titleMsg;
@property (copy, nonatomic) NSString *againReasonType;
@property (nonatomic) long long loadingTimeMs;
@property (copy, nonatomic) NSDictionary *trackExts;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (unsigned long long)p_styleStyleStr:(id)a0;
- (void).cxx_destruct;

@end
