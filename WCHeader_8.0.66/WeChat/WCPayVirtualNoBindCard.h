@class NSString, NSArray;

@interface WCPayVirtualNoBindCard : NSObject

@property (nonatomic) unsigned int m_uiCardID;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBankName;
@property (nonatomic) unsigned int m_uiCardStatus;
@property (retain, nonatomic) NSString *m_nsLogoUrl;
@property (retain, nonatomic) NSString *m_nsBigLogoUrl;
@property (retain, nonatomic) NSString *m_nsBackgroundLogoUrl;
@property (nonatomic) unsigned int m_uiCardType;
@property (retain, nonatomic) NSArray *m_aryEducationList;
@property (retain, nonatomic) NSString *m_branderUserName;
@property (retain, nonatomic) NSString *m_branderNickName;

- (void).cxx_destruct;

@end
