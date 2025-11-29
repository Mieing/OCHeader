@class BusiF2FFavorCommResp, NSString, NSArray, WCPayWarningNotice, ExtraBuyInfo;

@interface WCPayTranferGetUserNameResponse : NSObject

@property (retain, nonatomic) NSString *m_nsFacingPaidID;
@property (retain, nonatomic) NSString *m_nsUserNmae;
@property (retain, nonatomic) NSString *m_nsTruthName;
@property (nonatomic) unsigned int m_uiTimeStamp;
@property (nonatomic) unsigned int m_uiPayScene;
@property (nonatomic) long long m_llTotalMoney;
@property (retain, nonatomic) NSString *m_nsProductDetail;
@property (retain, nonatomic) NSString *m_nsTransferXmlContent;
@property (retain, nonatomic) NSString *m_uifaceTofaceName;
@property (retain, nonatomic) NSString *m_uifaceTofaceDescTitle;
@property (retain, nonatomic) NSString *m_uifaceTofacePayerDescTitle;
@property (nonatomic) unsigned int busi_type;
@property (retain, nonatomic) NSString *mch_name;
@property (retain, nonatomic) NSString *mch_photo;
@property (retain, nonatomic) NSString *rcvr_ticket;
@property (nonatomic) unsigned int get_pay_wifi;
@property (retain, nonatomic) NSString *mch_type;
@property (nonatomic) unsigned int mch_time;
@property (retain, nonatomic) NSString *receiver_openid;
@property (nonatomic) unsigned int amount_remind_bit;
@property (nonatomic) BOOL payerDescRequired;
@property (retain, nonatomic) NSString *payerDescPlaceholder;
@property (retain, nonatomic) NSString *scan_tile;
@property (nonatomic) unsigned int show_photo;
@property (retain, nonatomic) NSString *photo_url;
@property (retain, nonatomic) NSString *favor_desc;
@property (nonatomic) unsigned int scan_scene;
@property (retain, nonatomic) NSString *favor_req_sign;
@property (retain, nonatomic) NSString *favor_req_extend;
@property (retain, nonatomic) NSArray *favor_list;
@property (retain, nonatomic) BusiF2FFavorCommResp *favor_comm_resp;
@property (nonatomic) unsigned int photo_style;
@property (nonatomic) unsigned int get_favor_interval;
@property (retain, nonatomic) NSString *mch_info_string;
@property (retain) NSString *paying_rcvr_info;
@property (retain) NSString *succpage_rcvr_info;
@property (nonatomic) unsigned int action_type;
@property (retain, nonatomic) NSString *jump_url;
@property (retain, nonatomic) NSString *jump_route_info;
@property (retain, nonatomic) WCPayWarningNotice *notice;
@property (retain, nonatomic) ExtraBuyInfo *extra_buy;
@property (retain, nonatomic) NSString *favor_title;
@property (retain, nonatomic) NSString *extra_buy_title;
@property (nonatomic) BOOL enable_union_pay;

- (void).cxx_destruct;

@end
