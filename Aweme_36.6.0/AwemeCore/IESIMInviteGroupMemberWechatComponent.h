@class IESIMContactPickerComponentContext;

@interface IESIMInviteGroupMemberWechatComponent : IESIMContactPickerWechatShareComponent

@property (weak, nonatomic) IESIMContactPickerComponentContext *context;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)cellTitle;
- (void)didClickWechatShare;
- (id)cellAvatarImageName;
- (id)cellAvatarBackgrondColor;
- (void)updateCellModelIfNeeded:(id)a0;
- (BOOL)__shouldUseBigStyle;

@end
