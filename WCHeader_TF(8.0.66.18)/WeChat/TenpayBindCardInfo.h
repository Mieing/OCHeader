@class NSString;

@interface TenpayBindCardInfo : NSObject

@property (nonatomic) BOOL m_bSameCardExist;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBankName;
@property (retain, nonatomic) NSString *m_nsTelphone;
@property (retain, nonatomic) NSString *m_nsCardType;
@property (retain, nonatomic) NSString *m_nsBindCardNumber;
@property (retain, nonatomic) NSString *m_nsBindSerial;
@property (retain, nonatomic) NSString *m_nsToken;

- (void).cxx_destruct;

@end
