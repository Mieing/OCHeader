@class UIButton, NSString, UIView;
@protocol IESIMChatDiskCleanDataInterface;

@interface IESIMChatDiskCleanNaviComponent : AWEIMComponentBase <IESIMChatDiskCleanNaviInterface>

@property (retain, nonatomic) UIView *naviBackgroundView;
@property (retain, nonatomic) UIButton *switchButton;
@property (weak, nonatomic) id<IESIMChatDiskCleanDataInterface> dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (id)naviBarView;
- (void)componentDidMounted:(id)a0;
- (void)setupBind;
- (void)switchButtonClicked:(id)a0;
- (id)p_transferTypeStrFromType:(unsigned long long)a0;
- (unsigned long long)p_transferTypeFromTypeStr:(id)a0;
- (void).cxx_destruct;
- (void)createUI;

@end
