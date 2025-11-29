@class NSString, WCPayBindCardRecommendH5Info, WCPayBindCardActivityInfo, WCPayBindCardRecommendTinyAppInfo, WCPayBindCardRecommendNativeInfo;

@interface WCPayBindCardSuccessResponse : NSObject

@property (nonatomic) long long retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *bind_flag;
@property (retain, nonatomic) NSString *bind_serial;
@property (retain, nonatomic) NSString *bind_succ_btn_wording;
@property (nonatomic) unsigned int jump_type;
@property (nonatomic) unsigned int show_bind_succ_page;
@property (retain, nonatomic) WCPayBindCardActivityInfo *activity_info;
@property (retain, nonatomic) WCPayBindCardRecommendH5Info *h5_info;
@property (retain, nonatomic) WCPayBindCardRecommendTinyAppInfo *tinyapp_info;
@property (retain, nonatomic) WCPayBindCardRecommendNativeInfo *native_info;
@property (retain, nonatomic) NSString *bind_succ_remind_wording;
@property (retain) NSString *title;
@property (retain) NSString *desc;
@property (retain) NSString *page;
@property (retain) NSString *err_jump_page;
@property (retain) NSString *action;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
