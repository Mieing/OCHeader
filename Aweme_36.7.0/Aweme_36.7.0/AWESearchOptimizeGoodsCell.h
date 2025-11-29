@class NSString, AWEEcomSearchWebImageView, NSDictionary, AWEBinding, AWESearchIconImageView, AWEDoubleColumnSearchMerchandiseModel, AWEEcommerceSearchFeedbackPanel;
@protocol AWESearchWordProtocol;

@interface AWESearchOptimizeGoodsCell : AWESearchCachalotECommerceBaseCell <AWESearchIconImageViewProtocol, AWEMSearchAutoPlayCard>

@property (retain, nonatomic) AWEBinding *binding;
@property (copy, nonatomic) id /* block */ longPressHandler;
@property (retain, nonatomic) AWESearchIconImageView *findSimilarEntranceIcon;
@property (nonatomic) BOOL mainPictureRegionLabelAnimating;
@property (copy, nonatomic) NSDictionary *goodsDetailReturnPitayaMessage;
@property (nonatomic) BOOL haveOtherIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<AWESearchWordProtocol> searchWordDelegate;
@property (retain, nonatomic) AWEEcomSearchWebImageView *goodsImageView;
@property (nonatomic) double realPlaybackTimeForAdBreak;
@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) AWEEcommerceSearchFeedbackPanel *feedbackPanel;
@property (nonatomic) BOOL needHideDefaultTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)goodsOrVideoHeight:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (double)currPlaybackTime;
- (void)configWithModel:(id)a0;
- (void)startMainPictureRegionLabelAnimationWithPitayaMessage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageVideoAreaFrame;
- (void)searchIconImageViewTapTrackerWithMainPictureLabel:(id)a0;
- (void)searchIconImageViewShowTrackerWithMainPictureLabel:(id)a0;
- (void)iconLayout:(id)a0 iconImageview:(id)a1 imageSuperView:(id)a2;
- (void)createFindSimilarLabelAnimationWithPitayaMessage:(id)a0;
- (void)animatedButtonTapped:(id)a0;
- (id)getFindSimilarEntranceTrackerCommonDicWithEntranceType:(id)a0;
- (void)addIconView:(id)a0 imageSuperView:(id)a1;
- (void)addNewProductIcon:(id)a0 imageSuperView:(id)a1 withModel:(id)a2;
- (void)didBecomeActive;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)dealloc;
- (id)activeView;

@end
