@class NSString;

@interface WCPayWalletInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_walletType;
@property (retain, nonatomic) NSString *m_walletName;
@property (retain, nonatomic) NSString *m_walletUrl;
@property (nonatomic) BOOL m_walletSelected;
@property (retain, nonatomic) NSString *m_walletTpaCountry;
@property (nonatomic) unsigned int m_walletBalance;
@property (nonatomic) unsigned int m_walletTpaCountryMask;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
