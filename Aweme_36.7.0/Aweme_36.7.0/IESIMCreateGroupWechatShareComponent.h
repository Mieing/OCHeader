@class IESIMContactPickerComponentContext, NSString;

@interface IESIMCreateGroupWechatShareComponent : IESIMContactPickerWechatShareComponent <IESIMHalfScreenGroupShareCommandViewControllerShareDelegateProtocol, IESIMContackPickerViewControllerLifeCylceAction>

@property (weak, nonatomic) IESIMContactPickerComponentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)__log:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)groupShareCommandVCDidTransfered:(id)a0;
- (id)createGroupContext;
- (void)__enterInviteWechatQRCodeShare;
- (void)__enterInviteWechatLinkShare;
- (void)__enterInviteWechat;
- (void)didClickWechatShare;
- (void)containerVCDidDismiss;

@end
