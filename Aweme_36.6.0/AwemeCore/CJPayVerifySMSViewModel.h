@class CJPayBDCreateOrderResponse;

@interface CJPayVerifySMSViewModel : NSObject

@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (copy, nonatomic) id payEventData;
@property (nonatomic) BOOL isBaseVerifyProcess;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) BOOL isSimpleSMSViewStyle;
@property (nonatomic) BOOL isSwitchToSMS;
@property (nonatomic) BOOL isSwitchFromPrehub;

- (BOOL)needHideMarketingMsgView;
- (BOOL)needHideChooseMethodView;
- (BOOL)needHideCreditDescriptionRegion;
- (BOOL)needShowTopLeftBubbleView;
- (BOOL)p_isSafeTipsVisibleForStyle:(id)a0;
- (BOOL)needShowSafeTipsOnPage;
- (void).cxx_destruct;
- (id)init;
- (double)titleLabelFont;

@end
