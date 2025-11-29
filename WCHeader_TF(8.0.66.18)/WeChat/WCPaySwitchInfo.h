@interface WCPaySwitchInfo : NSObject <NSCoding>

@property (nonatomic) BOOL m_bSupportOfflinePay;
@property (nonatomic) BOOL m_bShowedFetch;
@property (nonatomic) BOOL m_bUsedBalance;
@property (nonatomic) BOOL m_bSupportBarCodeOfflinePay;
@property (nonatomic) BOOL m_bSupportQRCodeOfflinePay;
@property (nonatomic) BOOL m_bUsedMainCard;
@property (nonatomic) BOOL m_bSupportTouchID;
@property (nonatomic) BOOL m_bConfirmTouchAuth;
@property (nonatomic) BOOL m_bLCTBalance;
@property (nonatomic) BOOL m_bCanSwitchWallet;
@property (nonatomic) BOOL m_bEnableCardDetailUrl;
@property (nonatomic) BOOL m_bEnableReportLocation;
@property (nonatomic) BOOL m_bIsHideBalanceValue;
@property (nonatomic) BOOL m_bIsBalanceDetailShowRealnameGuide;
@property (nonatomic) BOOL m_bIsShowOrderHistoryH5;
@property (nonatomic) BOOL m_bEnableReportSSID;
@property (nonatomic) BOOL m_bShowBalanceValue;
@property (nonatomic) BOOL m_bSupportBindCardOpt;
@property (nonatomic) BOOL m_bEnableNewPayManage;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
