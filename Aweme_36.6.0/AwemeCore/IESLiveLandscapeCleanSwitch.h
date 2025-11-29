@class UIButton, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveLandscapeCleanSwitch : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *switchAnimationButton;
@property (copy, nonatomic) id /* block */ clickAction;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)switchForOpen:(BOOL)a0 withAnim:(BOOL)a1;
- (BOOL)cleanSwitchIsOpen;
- (void)didClickSwitchBtn;
- (void)switchAnimationForOpen:(BOOL)a0;
- (void)switchForOpen:(BOOL)a0;
- (id)webpForOpen:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)viewType;
- (void)setupViews;

@end
