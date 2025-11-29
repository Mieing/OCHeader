@class NSString;

@interface WCPayWXBorrowMoneyItem : NSObject

@property (nonatomic) int m_enWCPayWXBorrowMoneyItemStatus;
@property (retain, nonatomic) NSString *m_nsRedirectUrl;
@property (retain, nonatomic) NSString *m_nsToOpenTitle;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBankName;
@property (retain, nonatomic) NSString *m_nsBankLogoUrl;
@property (retain, nonatomic) NSString *m_nsBankBgUrl;
@property (retain, nonatomic) NSString *m_nsBankMasterUrl;
@property (retain, nonatomic) NSString *m_nsIsOverDue;
@property (retain, nonatomic) NSString *m_nsAvailableOtb;
@property (nonatomic) unsigned int m_uiRedCodIndex;

- (void).cxx_destruct;

@end
