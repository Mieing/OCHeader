@class FinderLiveAppMsgGameAllPlayingInfo, NSString, UILabel, MMGradientView, MMFinderLiveNumberAnimationLogic;

@interface MMFinderLiveNotifyStyleGameAllPlayingPubbleCell : MMFinderLiveNotifyStyleGameRecommendPubbleCell <MMFinderLiveNumberAnimationLogicObserver>

@property (retain, nonatomic) MMFinderLiveNumberAnimationLogic *animationLogic;
@property (retain, nonatomic) MMGradientView *gradientView;
@property (retain, nonatomic) UILabel *infoPrefixLabel;
@property (retain, nonatomic) UILabel *infoNumberLabel;
@property (retain, nonatomic) MMGradientView *infoBackgroundView;
@property (retain, nonatomic) FinderLiveAppMsgGameAllPlayingInfo *allPlayingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numberFont;
+ (double)preferDisplayDurationWithComment:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (double)infoPrefixLabelRightMargin;
- (void)layoutUI;
- (float)_calculateInfoPrefixLabelMaxWidth;
- (void)didMoveToWindow;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)a0;
- (void)changeNumberWithLogic:(id)a0;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (void).cxx_destruct;

@end
