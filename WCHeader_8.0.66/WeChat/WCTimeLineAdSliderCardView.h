@class WCAdSliderCardLogic, NSString, WCAdSliderCardView, WCAdSliderCardProductView, WCAdSliderCardOpeningAnimationView;

@interface WCTimeLineAdSliderCardView : WCContentItemBaseView <WCAdSliderCardViewDelegate, WCAdSliderCardProductViewDelegate, WCAdSliderCardOpeningAnimationViewDelegate>

@property (retain, nonatomic) WCAdSliderCardView *sliderCard;
@property (retain, nonatomic) WCAdSliderCardProductView *productView;
@property (retain, nonatomic) WCAdSliderCardOpeningAnimationView *openingAnimationView;
@property (readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0;
+ (BOOL)hasProductInfo:(id)a0;
+ (BOOL)hasOpeningAnimation:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)initView;
- (void)layoutSubviews;
- (void)initSliderCard;
- (id)createSliderCard:(id)a0;
- (void)initProductView;
- (void)initOpeningAnimationView;
- (void)contentItemWillDisplay;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)onSliderCardClick:(long long)a0 clickType:(long long)a1;
- (void)onSliderCardSlideJump;
- (void)onSliderCardExposure:(long long)a0;
- (void)onAutoSlideFrom:(long long)a0 to:(long long)a1;
- (void)onSliderCardSlideWithDuration:(unsigned long long)a0;
- (void)onSliderCardWillChangeIndex:(long long)a0;
- (void)onProductBarClick:(long long)a0;
- (void)onOpeningAnimationDisplayFinished;
- (id)fetchMediaId;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void).cxx_destruct;

@end
