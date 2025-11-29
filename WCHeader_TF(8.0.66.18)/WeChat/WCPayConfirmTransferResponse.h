@class OpenMinimchGuide, NSString, WCPayJumpRemindInfo, InterceptWin, WCPayRealnameGuideInfo;

@interface WCPayConfirmTransferResponse : NSObject

@property (nonatomic) long long m_llFee;
@property (retain, nonatomic) NSString *m_nsFeeType;
@property (retain, nonatomic) NSString *m_nsPayer;
@property (retain, nonatomic) NSString *m_nsReceiver;
@property (retain, nonatomic) WCPayRealnameGuideInfo *realnameGuideInfo;
@property (retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo;
@property (retain, nonatomic) InterceptWin *intercept_win;
@property (retain, nonatomic) InterceptWin *intercept_win_after;
@property (retain, nonatomic) NSString *left_button_continue;
@property (retain, nonatomic) NSString *half_page_info;
@property (retain, nonatomic) OpenMinimchGuide *open_minimch_guide;
@property (retain, nonatomic) NSString *not_in_group_msg;

- (void).cxx_destruct;

@end
