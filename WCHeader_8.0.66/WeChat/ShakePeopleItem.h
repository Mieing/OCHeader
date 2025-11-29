@class NSString;

@interface ShakePeopleItem : NSObject <PBCoding, NSCoding>

@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (retain, nonatomic) NSString *m_nsCountry;
@property (retain, nonatomic) NSString *m_nsProvince;
@property (retain, nonatomic) NSString *m_nsCity;
@property (nonatomic) unsigned int m_uiSex;
@property (retain, nonatomic) NSString *m_nsDistance;
@property (retain, nonatomic) NSString *m_nsSignature;
@property (nonatomic) unsigned int m_uiScene;
@property (nonatomic) unsigned int m_uiVerifyFlag;
@property (retain, nonatomic) NSString *m_nsVerifyInfo;
@property (retain, nonatomic) NSString *m_nsVerifyContent;
@property (retain, nonatomic) NSString *m_nsWCBGImgObjectID;
@property (nonatomic) int m_iAlbumFlag;
@property (retain, nonatomic) NSString *m_pcAlbumBGImgID;
@property (retain, nonatomic) NSString *m_nsExternalInfo;
@property (retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl;
@property (nonatomic) unsigned int m_uiBrandSubscriptionSettings;
@property (retain, nonatomic) NSString *m_nsBrandIconUrl;
@property (nonatomic) unsigned int m_createTime;
@property (retain, nonatomic) NSString *m_headImgUrl;
@property (retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property (retain, nonatomic) NSString *m_nsAntispamTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsUserName;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsCountry;
+ (void)PBArrayAdd_m_nsProvince;
+ (void)PBArrayAdd_m_nsCity;
+ (void)PBArrayAdd_m_uiSex;
+ (void)PBArrayAdd_m_nsDistance;
+ (void)PBArrayAdd_m_nsSignature;
+ (void)PBArrayAdd_m_uiScene;
+ (void)PBArrayAdd_m_uiVerifyFlag;
+ (void)PBArrayAdd_m_nsVerifyInfo;
+ (void)PBArrayAdd_m_nsVerifyContent;
+ (void)PBArrayAdd_m_nsWCBGImgObjectID;
+ (void)PBArrayAdd_m_iAlbumFlag;
+ (void)PBArrayAdd_m_pcAlbumBGImgID;
+ (void)PBArrayAdd_m_nsExternalInfo;
+ (void)PBArrayAdd_m_nsBrandSubscriptConfigUrl;
+ (void)PBArrayAdd_m_uiBrandSubscriptionSettings;
+ (void)PBArrayAdd_m_nsBrandIconUrl;
+ (void)PBArrayAdd_m_createTime;
+ (void)PBArrayAdd_m_headImgUrl;
+ (void)PBArrayAdd_m_nsHeadHDImgUrl;
+ (void)PBArrayAdd_m_nsAntispamTicket;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)preInit;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
