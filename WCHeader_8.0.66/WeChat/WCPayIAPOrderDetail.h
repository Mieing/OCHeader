@class NSString;

@interface WCPayIAPOrderDetail : NSObject

@property (nonatomic) unsigned int m_payStatus;
@property (retain, nonatomic) NSString *m_productName;
@property (retain, nonatomic) NSString *m_totalMoney;
@property (retain, nonatomic) NSString *m_sellerID;
@property (retain, nonatomic) NSString *m_sellerName;
@property (retain, nonatomic) NSString *m_sellerFrom;
@property (retain, nonatomic) NSString *m_sellerUserName;
@property (retain, nonatomic) NSString *m_createTime;
@property (retain, nonatomic) NSString *m_transcationID;
@property (retain, nonatomic) NSString *m_payStatusName;
@property (retain, nonatomic) NSString *m_paySituation;
@property (retain, nonatomic) NSString *m_sellerPhone;
@property (retain, nonatomic) NSString *nsServiceAppID;
@property (retain, nonatomic) NSString *nsServiceDetail;
@property (retain, nonatomic) NSString *nsPaidSuccessDetail;
@property (retain, nonatomic) NSString *nsServiceAppUserName;
@property (retain, nonatomic) NSString *nsServiceAppNickName;
@property (retain, nonatomic) NSString *nsShareToFriendsURL;
@property (retain, nonatomic) NSString *nsServiceAppLogoUrl;
@property (nonatomic) int uiServiceSubscribeStrategy;

- (void).cxx_destruct;

@end
