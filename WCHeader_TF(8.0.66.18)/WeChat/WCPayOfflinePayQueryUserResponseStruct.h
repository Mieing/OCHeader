@class NSArray, NSString;

@interface WCPayOfflinePayQueryUserResponseStruct : NSObject <NSCoding>

@property (nonatomic) long long m_uiLimitFee;
@property (nonatomic) BOOL m_bNeedLoadingAndSuccessInfo;
@property (nonatomic) long long payAmount;
@property (nonatomic) long long payNumber;
@property (retain, nonatomic) NSArray *cardIcons;
@property (nonatomic) BOOL offlinePayPauseFlag;
@property (copy, nonatomic) NSString *offlinePayPauseWord;
@property (nonatomic) BOOL offlinePayForceGetToken;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
