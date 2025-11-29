@class NSString, MMAddressBook;

@interface AddressBookFriend : NSObject

@property (retain, nonatomic) MMAddressBook *m_addressBook;
@property (retain, nonatomic) NSString *m_username;
@property (retain, nonatomic) NSString *m_aliasname;
@property (retain, nonatomic) NSString *m_nickname;
@property (nonatomic) BOOL m_isInMyContactList;
@property (nonatomic) unsigned int m_uiSex;
@property (retain, nonatomic) NSString *m_nsCountry;
@property (retain, nonatomic) NSString *m_nsProvince;
@property (retain, nonatomic) NSString *m_nsCity;
@property (retain, nonatomic) NSString *m_nsSignature;
@property (retain, nonatomic) NSString *m_nsWCBGImgObjectID;
@property (nonatomic) int m_iWCFlag;
@property (retain, nonatomic) NSString *m_pcWCBGImgID;
@property (retain, nonatomic) NSString *m_nsExternalInfo;
@property (retain, nonatomic) NSString *m_nsBrandSubscriptConfigUrl;
@property (nonatomic) unsigned int m_uiBrandSubscriptionSettings;
@property (retain, nonatomic) NSString *m_nsBrandIconUrl;
@property (retain, nonatomic) NSString *m_nsHeadImgUrl;
@property (retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property (retain, nonatomic) NSString *m_nsAntispamTicket;
@property (nonatomic) BOOL bWaitForVerify;

- (id)init;
- (void)dealloc;
- (long long)compare:(id)a0;
- (long long)compareMobileFriendAscending:(id)a0;
- (BOOL)copyPatialFieldFromAddressBookFriend:(id)a0;
- (void)updateContact:(id)a0;
- (void).cxx_destruct;

@end
