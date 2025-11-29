@class CJPayUnifyPayWeakContractView, NSString, CJPayUnifyPayMethodRecommendView, CJPayCommonRecView, CJPayUnifyCashierRenderModel, CJPayDefaultChannelShowConfig, CJPayUnifyPayHighContractView;
@protocol CJPayUnifyPayGuideDelegate;

@interface CJPayUnifyPayGuideManager : NSObject

@property (retain, nonatomic) CJPayUnifyCashierRenderModel *unifyModel;
@property (readonly, nonatomic) CJPayDefaultChannelShowConfig *currentShowConfig;
@property (weak, nonatomic) id<CJPayUnifyPayGuideDelegate> delegate;
@property (readonly, nonatomic) unsigned long long guideType;
@property (retain, nonatomic) CJPayUnifyPayWeakContractView *weakContractView;
@property (retain, nonatomic) CJPayUnifyPayHighContractView *highContractView;
@property (nonatomic) BOOL isWeakContractChoose;
@property (retain, nonatomic) NSString *interactionOptType;
@property (retain, nonatomic) CJPayUnifyPayMethodRecommendView *recommendView;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *recommendShowConfig;
@property (nonatomic) BOOL isHasChangedToRecommendShowConfig;
@property (retain, nonatomic) CJPayCommonRecView *commonRecView;
@property (nonatomic) BOOL isCommonRecChoose;
@property (nonatomic) long long globalMaxToastCount;
@property (nonatomic) BOOL didInitGlobalToastCount;

- (void)p_reloadCurrentView;
- (void)updateWithUnifyPayModel:(id)a0;
- (void)reloadCurrentViewWithBGColor:(id)a0;
- (unsigned long long)getCurrentGuideType;
- (id)guideViewStatus;
- (id)getCurrentGuideView;
- (id)currentGuideStatusParams;
- (id)currentCommonRecStatusParams;
- (id)currentGuideAddiTypeStr;
- (id)currentCommonRecSwitchStatus;
- (BOOL)isAssociatedConfigChange;
- (BOOL)currentViewIsExpand;
- (id)p_setupRecommendShowConfig;
- (void)p_updateBGColor:(id)a0;
- (BOOL)p_shouldShowRecommendView;
- (void)p_showPayAndXChooseStateChangeToast:(BOOL)a0;
- (void)p_callBackWithData:(id)a0;
- (BOOL)p_shouldShowHighContractView;
- (BOOL)p_shouldShowBottomContractView;
- (BOOL)p_shouldShowCommonRecView;
- (BOOL)p_isSupportGuideViewShowWithGuideType:(unsigned long long)a0 data:(id)a1;
- (BOOL)p_enableRecommendViewGlobalClick;
- (BOOL)canRecOpenBio;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
