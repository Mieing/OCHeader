@class CJPayVerifyDescRegionModel, NSString, CJPayPayAndXShowInfoModel, CJPayUnifyPayAgainDisplayInfoModel, CJPayDefaultChannelShowConfig, CJPayBDDeskConfig;

@interface CJPayUnifyPayHomePageViewModel : NSObject

@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (nonatomic) unsigned long long viewStatus;
@property (nonatomic) BOOL isNeedShowHightContractView;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (nonatomic) BOOL isGuideViewFixedTop;
@property (nonatomic) BOOL isGuideViewFixedBottom;
@property (retain, nonatomic) CJPayUnifyPayAgainDisplayInfoModel *payAgainModel;
@property (retain, nonatomic) CJPayBDDeskConfig *deskConfig;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (nonatomic) BOOL isScrollPosition;
@property (retain, nonatomic) CJPayVerifyDescRegionModel *verifyRigionModel;
@property (nonatomic) BOOL hasInputPwd;
@property (nonatomic) BOOL isKeepCompressStatus;
@property (nonatomic) BOOL isUnifyOptStyle;

- (void).cxx_destruct;

@end
