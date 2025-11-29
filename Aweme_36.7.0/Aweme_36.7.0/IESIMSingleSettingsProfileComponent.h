@class NSString, UIImageView, IESIMSingleSettingsAvatarBackgroundView, IESIMChatSettingsItemInfoViewModel;

@interface IESIMSingleSettingsProfileComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider>

@property (retain, nonatomic) IESIMChatSettingsItemInfoViewModel *viewModel;
@property (retain, nonatomic) IESIMSingleSettingsAvatarBackgroundView *bgView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)setupBinding;
- (void)updateAvatar:(id)a0;
- (void)p_transferToProfile;
- (void).cxx_destruct;
- (void)updateTitle:(id)a0;

@end
