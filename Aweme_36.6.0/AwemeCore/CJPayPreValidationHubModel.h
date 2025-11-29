@class CJPayBDCreateOrderResponse, CJPayBaseVerifyManager, CJPayDefaultChannelShowConfig, CJPayDoubleConfirmPageInfoModel;

@interface CJPayPreValidationHubModel : NSObject

@property (weak, nonatomic) CJPayBaseVerifyManager *manager;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (retain, nonatomic) CJPayDoubleConfirmPageInfoModel *pageInfoModel;
@property (copy, nonatomic) id /* block */ buttonTapHandler;
@property (copy, nonatomic) id /* block */ commonRecommendClick;

- (BOOL)needShowTopRightBtn;
- (BOOL)needHideMarketingMsgView;
- (BOOL)needHideChooseMethodView;
- (BOOL)needHideCreditDescriptionRegion;
- (long long)switchTypeForString:(id)a0;
- (long long)primaryButtonSwitchType;
- (id)primaryButtonExtraParam;
- (long long)secondaryButtonSwitchType;
- (id)secondaryButtonExtraParam;
- (id)p_verifyTypeMap;
- (void).cxx_destruct;

@end
