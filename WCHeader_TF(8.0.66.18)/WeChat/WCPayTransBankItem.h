@class NSString, NSArray;

@interface WCPayTransBankItem : MMObject <IWCPaySelecBankItem>

@property (retain, nonatomic) NSString *m_nsBankCardType;
@property (retain, nonatomic) NSString *m_nsBankName;
@property (retain, nonatomic) NSString *m_nsBankImageUrl;
@property (nonatomic) unsigned int m_uiBankFlag;
@property (nonatomic) unsigned int m_uiChargeFee;
@property (retain, nonatomic) NSString *m_nsMaintenanceText;
@property (retain, nonatomic) NSString *m_nsMaintenanceColor;
@property (retain, nonatomic) NSString *m_nsMaintenanceAlertTitle;
@property (retain, nonatomic) NSString *m_feeRateExplain;
@property (nonatomic) unsigned long long m_minPondage;
@property (retain, nonatomic) NSString *m_nsPinYin;
@property (retain, nonatomic) NSArray *m_enterTimeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBankCardElem:(id)a0;
- (BOOL)isUnderMaintenance;
- (id)bankCardType;
- (id)bankName;
- (id)bankIconUrl;
- (id)pinYin;
- (void).cxx_destruct;

@end
