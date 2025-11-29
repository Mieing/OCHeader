@class WCPayLqtCellInfo, NSString, WCPayCredInfo, WCPayLqbShowInfo;

@interface WCPayUserInfo : NSObject <NSCoding>

@property (nonatomic) long long paymenu_use_new;
@property (nonatomic) int m_regFlag;
@property (retain, nonatomic) NSString *m_usrName;
@property (retain, nonatomic) WCPayCredInfo *m_usrCredInfo;
@property (retain, nonatomic) NSString *m_usrIDNumber;
@property (retain, nonatomic) NSString *m_usrPhoneNumber;
@property (nonatomic) unsigned int m_cardUserFlag;
@property (nonatomic) BOOL m_bHadCard;
@property (retain, nonatomic) NSString *m_nsFacingReceiverQRCode;
@property (nonatomic) BOOL m_bCanUseNewCardToResetPwd;
@property (retain, nonatomic) NSString *m_nsResetPwdNeedToOpenUrl;
@property (nonatomic) BOOL m_bTouchIDOpen;
@property (nonatomic) BOOL m_bTouchIDEnable;
@property (retain, nonatomic) NSString *m_nsTouchIDForbidword;
@property (retain, nonatomic) NSString *m_lctWording;
@property (retain, nonatomic) NSString *m_lctUrl;
@property (nonatomic) unsigned int m_lqtState;
@property (retain, nonatomic) WCPayLqbShowInfo *lqbShowInfo;
@property (retain, nonatomic) WCPayLqtCellInfo *lqtCellInfo;
@property (nonatomic) long long authen_account_type;
@property (nonatomic) int cert_encrypt_type;
@property (retain, nonatomic) NSString *m_nsForgetPasswordUrl;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
