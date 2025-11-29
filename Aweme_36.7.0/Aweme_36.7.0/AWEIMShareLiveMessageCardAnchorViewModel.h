@class UIImage, NSString, NSTimer, AWEAwemeModel, AWEIMShareLiveMessageCardAnchorModel, AWELiveShareBottomCardModel, AWEIMShareLiveMessage;
@protocol AWEIMShareLiveMessageCardAnchorViewModelDelegate;

@interface AWEIMShareLiveMessageCardAnchorViewModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEIMShareLiveMessage *message;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEIMShareLiveMessageCardAnchorModel *anchorModel;
@property (retain, nonatomic) AWELiveShareBottomCardModel *liveCustomAnchorModel;
@property (nonatomic) BOOL didUpdateWithAwemeModel;
@property (nonatomic) BOOL didUpdateWithAnchorModel;
@property (nonatomic) unsigned long long anchorStyle;
@property (nonatomic) unsigned long long benefitMainType;
@property (nonatomic) unsigned long long benefitType;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *discountPriceText;
@property (copy, nonatomic) NSString *discountInfoText;
@property (copy, nonatomic) NSString *countDownText;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) double countDownDiff;
@property (weak, nonatomic) id<AWEIMShareLiveMessageCardAnchorViewModelDelegate> delegate;

- (void)updateWithAwemeModel:(id)a0;
- (id)liveRoomModel;
- (void)trackCardTapWithLocation:(unsigned long long)a0;
- (id)getTrackInfos;
- (id)jumpSchemaParamsAfterClick;
- (void)__stopCountDownIfNeed;
- (void)__updateAnchorWithAwemeModel:(id)a0 anchorModel:(id)a1 liveCustomAnchorModel:(id)a2;
- (id)commonTrackingParams;
- (void)__clearUiInfos;
- (void)__updateBackpackAnchorWithAwemeModel:(id)a0;
- (void)__updateDefaultAnchorWithAwemeModel:(id)a0;
- (void)__updateSpecialAnchorWithAwemeModel:(id)a0 anchorModel:(id)a1;
- (void)__updateLiveCustomAnchorWithAwemeModel:(id)a0 liveCustomAnchorModel:(id)a1;
- (void)__updateBenefitAnchorWithAwemeModel:(id)a0 anchorModel:(id)a1;
- (void)__updateProductAnchorWithAwemeModel:(id)a0 anchorModel:(id)a1;
- (void)__updateLifeProductAnchorWithAwemeModel:(id)a0 anchorModel:(id)a1;
- (BOOL)__isValidBenefitMainType:(unsigned long long)a0;
- (void)__setupCountDownWith:(double)a0;
- (void)__updateCountDown;
- (id)anchorViewTitle;
- (id)anchorViewIconURL;
- (void)updateWithAnchorModel:(id)a0;
- (void)updateWithLiveCustomAnchorModel:(id)a0;
- (BOOL)hasAnchorViewTransferSchema;
- (BOOL)enableFloatingAnimation;
- (id)currentAnchorTypeString;
- (BOOL)enableShowTracker;
- (id)trackingParamsAfterClick;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessage:(id)a0;

@end
