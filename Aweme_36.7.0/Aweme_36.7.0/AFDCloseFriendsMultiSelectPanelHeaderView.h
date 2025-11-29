@class UIStackView, UIView, NSString, UIImageView, UIButton, AFDCloseFriendsSettingsPanelWidgetGuideView, YYLabel, UILabel;

@interface AFDCloseFriendsMultiSelectPanelHeaderView : UIView <AFDCloseFriendsSettingsPanelHeaderViewProtocol>

@property (retain, nonatomic) UIStackView *titleContainer;
@property (retain, nonatomic) UIStackView *headerStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *yyDescriptionLabel;
@property (retain, nonatomic) UIView *grabBar;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *backwardBtn;
@property (retain, nonatomic) UIView *searchBar;
@property (retain, nonatomic) UIView *searchBarSeperator;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelWidgetGuideView *widgetGuideView;
@property (retain, nonatomic) UIImageView *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFullScreen:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupUI;
- (void)didTapHeaderView;

@end
