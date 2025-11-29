@class IESLiveRequestAnimationButton, NSString, IESLiveGuideDailyTitleView, IESLiveGuideDailyContentView, IESLiveGuideDailyBottomItemView, IESLiveGuideDailyDistributionView;

@interface IESLiveGuideDailyFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideDailyContentViewDelegate, IESLiveGuideFaceStickerApplyEvent, IESLiveGuideOpenLiveAdditionalEvent, IESLiveGuideLocationStatusEvent, IESLiveGuideDailyDistributionViewDelegate, IESLiveGuideDailyTitleViewDelegate>

@property (retain, nonatomic) IESLiveRequestAnimationButton *startButton;
@property (retain, nonatomic) IESLiveGuideDailyTitleView *titleView;
@property (retain, nonatomic) IESLiveGuideDailyContentView *contentView;
@property (retain, nonatomic) IESLiveGuideDailyBottomItemView *cameraSwitchView;
@property (retain, nonatomic) IESLiveGuideDailyBottomItemView *beautyView;
@property (retain, nonatomic) IESLiveGuideDailyDistributionView *distributionView;
@property (nonatomic) int currentVisibleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)setupContentViews;
- (void)handleLiveTypeChange:(unsigned long long)a0;
- (void)didSelectedModeType:(unsigned long long)a0;
- (void)didClickLocationItem;
- (void)didClickVisibleItem;
- (void)faceStickerDidApply:(id)a0;
- (void)locationTitleDidChanged:(id)a0;
- (void)setupBottomViews;
- (void)trackShowBottomItem:(id)a0 moduleName:(id)a1;
- (void)startLiveAction;
- (void)trackClickBottomItem:(id)a0 moduleName:(id)a1;
- (void)trackClickLocationItem;
- (void)trackClickVisibleItem;
- (void)trackClickTitleView;
- (void)didClickTitleView;
- (void).cxx_destruct;
- (void)setupViews;

@end
