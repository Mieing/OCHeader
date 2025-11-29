@class NSString;

@interface AWEIMFansGroupDisturbContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)__trackShowData;
- (void)p_createPresenter;
- (void)__trackSettingClickData;
- (void)__trackCloseData;
- (void)__trackMuteClickData;
- (void)p_addMoreButtonClickBlock;
- (BOOL)p_callRouterOnMoreButtonClick;
- (id)displayMessage;
- (id)message;

@end
