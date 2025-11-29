@class NSString;

@interface WCPayOfflinePayFreezeMessageStruct : NSObject <NSCoding>

@property (nonatomic) BOOL m_bFreezeOfflinePay;
@property (nonatomic) unsigned int m_uiFreezeOfflinePayType;
@property (retain, nonatomic) NSString *m_nsFreezeOfflinePayMessage;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
