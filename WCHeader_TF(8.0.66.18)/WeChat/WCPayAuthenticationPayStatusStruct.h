@class NSString, NSArray, WCPayMultiOrderDetail, WCPayPayResponseRetryInfo, WCPayRealnameGuideInfo, WCPayVerifyCreTailInfo, WCPaySimpleUserSetPassGuideInfo, WCPayDigitalCertInstallAction;

@interface WCPayAuthenticationPayStatusStruct : NSObject {
    WCPayRealnameGuideInfo *realnameInfo;
}

@property (nonatomic) BOOL m_bPayCompleteFlag;
@property (retain, nonatomic) NSString *m_nsReturnKey;
@property (retain, nonatomic) NSArray *m_naTranscationID;
@property (retain, nonatomic) NSString *nsServiceAppID;
@property (retain, nonatomic) NSString *nsServiceDetail;
@property (retain, nonatomic) NSString *nsServiceAppUserName;
@property (retain, nonatomic) NSString *nsServiceAppLogoUrl;
@property (retain, nonatomic) NSString *nsServiceAppNickName;
@property (retain, nonatomic) NSString *nsServiceAppSubscribeURL;
@property (retain, nonatomic) NSString *nsShareToFriendsURL;
@property (retain, nonatomic) NSString *nsPaidSuccessDetail;
@property (nonatomic) int uiServiceSubscribeStrategy;
@property (retain, nonatomic) WCPayMultiOrderDetail *m_oOrdelStatusDetail;
@property (retain, nonatomic) NSString *nsBindSerial;
@property (retain, nonatomic) NSString *nsCardBankName;
@property (retain, nonatomic) NSString *nsCardBankType;
@property (retain, nonatomic) NSString *nsCardNumber;
@property (retain, nonatomic) NSString *nsJumpToSafariUrl;
@property (retain, nonatomic) NSString *nsWapPayJumpUrl;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo;
@property (retain, nonatomic) NSString *balanceMobile;
@property (retain, nonatomic) NSString *balanceHelpUrl;
@property (retain, nonatomic) WCPayVerifyCreTailInfo *verify_cre_tail_info;
@property (retain, nonatomic) WCPayDigitalCertInstallAction *m_digitalAction;
@property (retain, nonatomic) WCPaySimpleUserSetPassGuideInfo *m_simpleUserGuideInfo;
@property (nonatomic) long long can_pay_retry;
@property (retain, nonatomic) WCPayPayResponseRetryInfo *retry_pay_info;
@property (nonatomic) BOOL is_jsapi_close_page;
@property (retain, nonatomic) NSString *jsapi_tinyapp_username;
@property (retain, nonatomic) NSString *jsapi_tinyapp_path;
@property (nonatomic) unsigned int is_clear_failure;

- (void).cxx_destruct;

@end
