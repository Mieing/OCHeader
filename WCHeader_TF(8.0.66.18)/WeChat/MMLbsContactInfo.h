@class NSString;

@interface MMLbsContactInfo : NSObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *distance;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int imgStatus;
@property (nonatomic) unsigned int CertificationFlag;
@property (retain, nonatomic) NSString *CertificationInfo;
@property (retain, nonatomic) NSString *m_nsAlias;
@property (retain, nonatomic) NSString *m_nsWCBGImgObjectID;
@property (nonatomic) long long m_iAlbumFlag;
@property (retain, nonatomic) NSString *m_pcAlbumBGImgID;
@property (retain, nonatomic) NSString *m_nsHeadImgUrl;
@property (retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property (retain, nonatomic) NSString *m_nsExternalInfo;
@property (retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl;
@property (nonatomic) unsigned int m_uiBrandSubscriptionSettings;
@property (retain, nonatomic) NSString *m_nsBrandIconUrl;
@property (nonatomic) BOOL m_isFriend;
@property (copy, nonatomic) NSString *m_displayName;
@property (retain, nonatomic) NSString *m_nsAntispamTicket;
@property (nonatomic) unsigned int finderFlag;

- (id)init;
- (id)initWithPBLbsContactInfo:(id)a0;
- (id)keyPaths;
- (id)description;
- (BOOL)isInMyContactList;
- (void).cxx_destruct;

@end
