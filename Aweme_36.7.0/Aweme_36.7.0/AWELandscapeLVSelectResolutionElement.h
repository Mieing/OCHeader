@class UIButton, NSString, UIView;
@protocol AWENoxusPlayerSettingTypeView;

@interface AWELandscapeLVSelectResolutionElement : AWELandscapeInteractionBaseElement <AWENoxusPlayerSettingTypeViewDelegate>

@property (retain, nonatomic) UIButton *resolutionButton;
@property (retain, nonatomic) UIView<AWENoxusPlayerSettingTypeView> *selectResolutionView;
@property (nonatomic) BOOL isShowingResolutionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)hideAllPanels;
- (void)didEnterLandscape;
- (void)noxusSettingTypeListSelectModel:(id)a0;
- (void)noxusSettingTypeDismiss:(BOOL)a0;
- (void)refreshResolutionButton:(unsigned long long)a0;
- (void)trackResolutionButtonShow;
- (void)dismissResolutionSettingView;
- (void)trackResolutionTypeSelected:(unsigned long long)a0 resolutionBefore:(unsigned long long)a1;
- (void)showResolutionSettingView;
- (id)resolutionTextWithType:(unsigned long long)a0;
- (BOOL)isShowingPanel;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;

@end
