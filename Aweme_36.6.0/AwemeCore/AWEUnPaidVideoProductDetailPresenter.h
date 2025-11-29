@class NSString, AWEVideoProductDetailView, AWEAwemeModel, NSDictionary;

@interface AWEUnPaidVideoProductDetailPresenter : AWEVideoPaymentBasePresenter

@property (nonatomic) double timeStamp;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWEVideoProductDetailView *detailView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (BOOL)shouldActiveWithData:(id)a0 referString:(id)a1 logExtra:(id)a2;

- (BOOL)isPreviewVideo;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (double)currentPlayProgress;
- (void)updateLogExtra:(id)a0;
- (id)trackParameters;
- (id)getRecType:(id)a0;
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
- (id)buySchemaParameters;
- (void)updateButtonInfo;
- (void)updateDetailViewWithNewModel:(id)a0;
- (id)bizTypeIdentifier;
- (BOOL)shouldShowReserveView;
- (void)didClickIAAUnlockButton;
- (void).cxx_destruct;
- (void)dealloc;
- (id)bizID;
- (void)addObservers;
- (id)currentEpisode;

@end
