@class UIStackView, UIView, NSString, UIImageView, UIButton, AFDCloseFriendsSettingsPanelWidgetGuideView, YYLabel, UILabel;

@interface AFDCloseFriendsSettingsPanelObdHeaderView : UIView <AFDCloseFriendsSettingsPanelHeaderViewProtocol>

@property (retain, nonatomic) UIStackView *headerStackView;
@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *backwardBtn;
@property (retain, nonatomic) UIView *searchBarSeperator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelWidgetGuideView *widgetGuideView;
@property (retain, nonatomic) YYLabel *yyDescriptionLabel;
@property (retain, nonatomic) UIView *grabBar;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
