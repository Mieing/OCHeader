@class UIStackView, AWEUserModel, UIImageView, NSString, UILabel, UIView, DUXCheckBox;
@protocol AWEIMActiveUserInfoService;

@interface AFDCloseFriendsSettingsPanelSelectionCell : UICollectionViewCell <AFDCloseFriendsSettingsPanelCellProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (nonatomic) unsigned long long roundCorners;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateActiveUserState;
- (void)p_onUserTapped;
- (void)renderModel:(id)a0 strategy:(id)a1;
- (void)addCornerRadius:(double)a0 corner:(unsigned long long)a1;
- (void)enableProfilePageTransition:(BOOL)a0;
- (void)updateEnabled:(BOOL)a0;
- (void)p_updateForOnboardingWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateChecked:(BOOL)a0;
- (void)layoutUI;

@end
