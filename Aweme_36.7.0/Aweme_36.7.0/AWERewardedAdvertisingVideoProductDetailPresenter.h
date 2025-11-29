@class NSString, AWEVideoProductDetailView, AWEAwemeModel, NSDictionary;
@protocol AWEShowBottomButtonPresenterProtocol;

@interface AWERewardedAdvertisingVideoProductDetailPresenter : AWEVideoPaymentBasePresenter <AWEShowBottomButtonViewProtocol>

@property (retain, nonatomic) id<AWEShowBottomButtonPresenterProtocol> bottomButtonPresenter;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWEVideoProductDetailView *detailView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double currPlayTime;
@property (nonatomic) long long currWatchStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (id)trackCommonParams;
- (void)updateLogExtra:(id)a0;
- (void)didClickCloseButton;
- (void)checkVideoShouldUnlock:(id)a0;
- (void)configDetailView;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)checkVideoShouldUnlockIfNeed;
- (void)didClickBuyButton;
- (void)hasShownView;
- (id)trackCommonParamsWithButtonIndex:(long long)a0;
- (id)getMultipleEventsViewForPresenter:(id)a0;
- (void)presenterDidClickAdUnlock:(id)a0;
- (void)presenter:(id)a0 didSwitchToScene:(id)a1 enableAnimation:(BOOL)a2;
- (void)didClickBuyButton:(id)a0;
- (void)updateButtonInfo;
- (void)updateUnlockProgressWithModel:(id)a0;
- (void)didClickBuyPlayletVIPButton;
- (void)didClickFreeWatchButton:(id)a0;
- (id)getCePaidEntranceByIndex:(long long)a0;
- (void)updateUnlockProgressInfo;
- (void)configDetailViewForFreeStyle;
- (void)updateDetailViewWithNewModel:(id)a0;
- (void).cxx_destruct;

@end
