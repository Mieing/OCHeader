@class YYLabel, NSString, UIView;

@interface AWEIMBlockSendMsgComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, AWEIMMessageListFooterAction, IESIMAppealChangeNotifyProtocol>

@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)themeDidReload;
- (void)imDisableAppealInfoDidChange:(id)a0;
- (void)footerViewDidDismiss;
- (void)showOrHideInputVCWithAppealModel:(id)a0;
- (id)getAttrStrWithChatBackground:(BOOL)a0;
- (id)getMutableAttrWithString:(id)a0 hasChatBackground:(BOOL)a1;
- (void).cxx_destruct;
- (void)setupView;

@end
