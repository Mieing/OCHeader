@class NSString, NSArray, WCPayFetchQAInfo;

@interface WCPayFetchInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *m_nsFetchChargeTitle;
@property (retain, nonatomic) NSString *m_nsFetchChargeRemark;
@property (retain, nonatomic) NSArray *m_arrAlertContent;
@property (retain, nonatomic) NSArray *m_arrKey;
@property (retain, nonatomic) NSArray *m_arrValue;
@property (nonatomic) BOOL m_bShowCharge;
@property (nonatomic) BOOL m_bCalcCharge;
@property (nonatomic) unsigned int m_uiRemainFee;
@property (nonatomic) unsigned int m_uiMinChargeFee;
@property (nonatomic) BOOL m_bISFullFetchDirect;
@property (copy, nonatomic) NSString *card_list_wording_title;
@property (copy, nonatomic) NSString *card_list_wording_content;
@property (retain, nonatomic) WCPayFetchQAInfo *withdraw_sector;

+ (id)fetchInfoOfJSONDic:(id)a0;
+ (id)GenFromDictionary:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
