@class NSString, PBBaseContact;

@interface PBCContact : NSObject <PBCoding>

@property (retain, nonatomic) PBBaseContact *baseContact;
@property (retain, nonatomic) NSString *chatRoomMemList;
@property (nonatomic) unsigned int chatRoomStatus;
@property (retain, nonatomic) NSString *chatRoomData;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) unsigned int certificationFlag;
@property (retain, nonatomic) NSString *certificationInfo;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *fbnickName;
@property (retain, nonatomic) NSString *fbid;
@property (nonatomic) unsigned int needUpdate;
@property (retain, nonatomic) NSString *wcbgimgObjectId;
@property (nonatomic) unsigned int wcflag;
@property (retain, nonatomic) NSString *wcbgimgId;
@property (retain, nonatomic) NSString *externalInfo;
@property (retain, nonatomic) NSString *brandSubscriptConfigUrl;
@property (nonatomic) unsigned int brandSubscriptionSettings;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (nonatomic) unsigned int isShowRedDot;
@property (retain, nonatomic) NSString *openIMAppid;
@property (retain, nonatomic) NSString *openIMDescId;
@property (nonatomic) unsigned int chatRoomDetailStatus;
@property (retain, nonatomic) NSString *m_textStatusID;
@property (retain, nonatomic) NSString *m_textStatusExtInfo;
@property (nonatomic) unsigned int m_uiDeleteFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_baseContact;
+ (void)PBArrayAdd_chatRoomMemList;
+ (void)PBArrayAdd_chatRoomStatus;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_certificationFlag;
+ (void)PBArrayAdd_certificationInfo;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_fbnickName;
+ (void)PBArrayAdd_fbid;
+ (void)PBArrayAdd_needUpdate;
+ (void)PBArrayAdd_wcbgimgObjectId;
+ (void)PBArrayAdd_wcflag;
+ (void)PBArrayAdd_wcbgimgId;
+ (void)PBArrayAdd_externalInfo;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_isShowRedDot;
+ (void)PBArrayAdd_openIMAppid;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_chatRoomDetailStatus;
+ (void)PBArrayAdd_m_textStatusID;
+ (void)PBArrayAdd_m_textStatusExtInfo;
+ (void)PBArrayAdd_m_uiDeleteFlag;
+ (void)initialize;

@end
