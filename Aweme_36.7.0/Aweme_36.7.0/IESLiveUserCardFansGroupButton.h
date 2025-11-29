@class NSString, UIImageView, UILabel, UIView, IESLiveUserCardStore;

@interface IESLiveUserCardFansGroupButton : UIView <IESLiveUserCardConfigProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic) BOOL enableFansGroupOnlyText;
@property (nonatomic) BOOL liveAnchorProfileFansGroupEnhance;
@property (nonatomic) long long configTag;
@property (nonatomic) BOOL firstLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithScene:(id)a0;
- (void)configWithUserModel:(id)a0;
- (void)onActionFansGroup;
- (void)refreshWithButtonType:(unsigned long long)a0;
- (void)animatePhase2ShowFansGroupEntry;
- (void)animatePhase1HideFansGroupEntry;
- (void)switchToNextState;
- (void)configWithTag:(long long)a0 isShowWhite:(BOOL)a1;
- (void)configWithStore:(id)a0;
- (void)configForFansGroupEnhanceWithScene:(id)a0 store:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setup;
- (BOOL)shouldShow;

@end
