@class NSString, NSArray, WCPayBeforePayInfo, FieldAreaInfo, WCPayTradeFavInfo, NSMutableArray, WCPayEntrustPayInfo, WCPaySimpleCashierInfo;

@interface WCPayMultiOrderDetail : NSObject

@property (nonatomic) unsigned int m_productNum;
@property (nonatomic) long long m_totalFee;
@property (retain, nonatomic) NSArray *m_supportBankArray;
@property (retain, nonatomic) NSMutableArray *m_orderDetailArray;
@property (nonatomic) BOOL m_isOpenProtocal;
@property (nonatomic) BOOL m_bNeedBindCardToShowFavInfo;
@property (retain, nonatomic) WCPayTradeFavInfo *m_oWCPayTradeFavInfo;
@property (retain, nonatomic) NSString *m_nsJumpToSafariUrl;
@property (retain, nonatomic) NSString *m_payFlag;
@property (nonatomic) unsigned long long m_assignUserInfoPay;
@property (retain, nonatomic) NSString *m_assignedUserName;
@property (retain, nonatomic) NSString *m_assignUserCreId;
@property (nonatomic) long long m_assignUserCreType;
@property (retain, nonatomic) NSString *m_assignPayInfo;
@property (retain, nonatomic) NSString *m_nsDiscountWording;
@property (retain, nonatomic) NSString *m_nsFavorRuleWording;
@property (retain, nonatomic) WCPayEntrustPayInfo *m_entrustPayInfo;
@property (nonatomic) BOOL m_isSupportBindCard;
@property (nonatomic) BOOL m_isSupportRetry;
@property (retain, nonatomic) NSString *paySuccBtnWording;
@property (nonatomic) BOOL bIsUseNewPaidSuccPage;
@property (retain, nonatomic) WCPayBeforePayInfo *m_beforePayInfo;
@property (nonatomic) int is_use_show_info;
@property (retain, nonatomic) NSArray *show_info;
@property (retain, nonatomic) NSArray *fetch_charge_show_info;
@property unsigned long long is_open_field_area;
@property (retain) FieldAreaInfo *field_area_info;
@property (retain) NSString *price_total_fee;
@property (retain) NSString *price_fee_type;
@property (retain) NSString *price_fee_symbol;
@property (retain) NSString *settlement_fee;
@property (retain) NSString *settlement_type;
@property (retain) NSString *settlement_symbol;
@property (retain) WCPaySimpleCashierInfo *simple_cashier_info;

- (void).cxx_destruct;

@end
