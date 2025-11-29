@class NSString, AWEVideoProductDetailView, AWEAwemeModel, NSDictionary;

@interface AWELongVideoIAAProductDetailPresenter : AWEVideoPaymentBasePresenter

@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWEVideoProductDetailView *detailView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) double currPlayTime;
@property (nonatomic) long long currWatchStatus;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (id)trackCommonParams;
- (void)didClickCloseButton;
- (id)getUnlockButtonTitle;
- (void)configDetailView;
- (BOOL)shouldShowViewWithPeriod:(double)a0;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (id)initWithView:(id)a0 model:(id)a1 referString:(id)a2 logExtra:(id)a3 context:(id)a4;
- (BOOL)shouldCheckViewStatusWhenDisplay;
- (void)checkVideoShouldUnlockIfNeed;
- (void)didClickBuyButton;
- (void)hasShownView;
- (id)getAlbumTypeNameString;
- (id)getRealAlbumName;
- (id)getTitleAddOnString;
- (id)detailTitleStr;
- (id)detailSubTitleStr;
- (void).cxx_destruct;

@end
