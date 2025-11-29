@class NSString;

@interface WCPayOfflinePayConfirmMessageStruct : NSObject

@property (retain, nonatomic) NSString *m_nsMessageUid;
@property (retain, nonatomic) NSString *m_nsProductName;
@property (retain, nonatomic) NSString *m_nsProductMoney;
@property (nonatomic) unsigned long long m_confirmType;
@property (retain, nonatomic) NSString *m_nsProductOriginalMoney;
@property (nonatomic) unsigned char routeInfo;

- (void).cxx_destruct;

@end
