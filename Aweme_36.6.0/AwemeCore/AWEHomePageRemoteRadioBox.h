@class UILabel, AWEHomePageRemoteCommonRadioBoxDataModel, NSArray, UIView, NSString, UIVisualEffectView, DUXRadioboxGroup, DUXDivider;

@interface AWEHomePageRemoteRadioBox : UIView <AWEHomePageRemoteViewProtocol>

@property (retain, nonatomic) NSArray *radioButtons;
@property (retain, nonatomic) DUXRadioboxGroup *radioboxGroup;
@property (retain, nonatomic) AWEHomePageRemoteCommonRadioBoxDataModel *radioBoxDataModel;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) id /* block */ radioBoxSelectedDidChange;
@property (copy, nonatomic) id /* block */ radioBoxSelectedWillChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewBackgroundColor;
- (void)updateWithItemDataModel:(id)a0 context:(id)a1;
- (double)homePageRemoteViewHeight;
- (void)homePageThemeDidChange:(long long)a0;
- (void)reloadWhenPanelShowWithItemDataModel:(id)a0;
- (void)p_updateUIWithDataModel:(id)a0;
- (id)createButtonsWithCount:(long long)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)titleLabelTextColor;

@end
