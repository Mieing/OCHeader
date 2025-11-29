@class NSString;

@interface WCPayLQTInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *lqtBankType;
@property (retain, nonatomic) NSString *lqtBindSerial;
@property (retain, nonatomic) NSString *lqtBankName;
@property (nonatomic) unsigned long long lqtTotalBalance;
@property (nonatomic) unsigned long long lqtAvailBalance;
@property (retain, nonatomic) NSString *lqtLogoUrl;
@property (retain, nonatomic) NSString *lqtforbidWord;
@property (retain, nonatomic) NSString *lqtforbidTitle;
@property (retain, nonatomic) NSString *lqtforbidUrl;
@property (retain, nonatomic) NSString *lqtShowWording;
@property (retain, nonatomic) NSString *lqtForbidId;
@property (retain, nonatomic) NSString *lqtmobile;
@property (nonatomic) BOOL bSupportOfflinePay;
@property (nonatomic) int default_card_state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
