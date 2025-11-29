@class NSString, WCAdSliderCardView, MMUIButton, MMUILabel;

@interface WCTimeLineAdFinderTopicView : WCContentItemBaseView <WCAdSliderCardViewDelegate, MMWebImageViewDelegate>

@property (retain, nonatomic) WCAdSliderCardView *sliderCard;
@property (retain, nonatomic) MMUIButton *topicInfoBar;
@property (retain, nonatomic) MMUILabel *relationTextLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForMedia:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)contentItemWillDisplay;
- (void)initSliderCard:(id)a0;
- (id)createSliderCard:(id)a0;
- (void)initTopicInfo:(id)a0;
- (void)initRelationInfo:(id)a0;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)updateDataInDetail:(id)a0;
- (void)onSliderCardClick:(long long)a0 clickType:(long long)a1;
- (void)onSliderCardExposure:(long long)a0;
- (void)onAutoSlideFrom:(long long)a0 to:(long long)a1;
- (void)onTopicInfoBarClick;
- (void)clickToJump;
- (id)fetchMediaId;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
