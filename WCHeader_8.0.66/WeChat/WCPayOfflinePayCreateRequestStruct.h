@class NSString;

@interface WCPayOfflinePayCreateRequestStruct : NSObject

@property (retain, nonatomic) NSString *m_nsPassword;
@property (retain, nonatomic) NSString *m_nsBindSerialNo;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsCardTail;
@property (nonatomic) unsigned int m_uiInitalMoney;

- (void).cxx_destruct;

@end
