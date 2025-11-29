@class NSString, NSDictionary;

@interface WCOutPhoneContact : NSObject

@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *nicknamePinYin;
@property (retain, nonatomic) NSString *nicknamePinYinShort;
@property (retain, nonatomic) NSDictionary *phoneWithLabels;
@property (retain, nonatomic) NSDictionary *phoneToMd5Dic;
@property (retain, nonatomic) NSString *mmNickname;
@property (retain, nonatomic) NSString *mmUsername;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (readonly, nonatomic) BOOL isAdressBookContact;
@property (readonly, nonatomic) BOOL isWeChatUser;
@property (nonatomic) BOOL isWeChatFriend;
@property (retain, nonatomic) NSString *mainCountryCode;
@property (retain, nonatomic) NSString *mainPurePhoneNum;

- (id)initWithMMPhoneContact:(id)a0;
- (id)initWithWCOutRecentCallItem:(id)a0;
- (id)initWithWCOutPhoneContact:(id)a0;
- (void).cxx_destruct;

@end
