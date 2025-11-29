@class NSString, UILabel, UIView, UIButton;
@protocol IESIMChatDiskCleanListInterface, IESIMChatDiskCleanDataInterface;

@interface IESIMChatDiskCleanBottomComponent : AWEIMComponentBase <IESIMChatDiskCleanBottomInterface>

@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *cleanButton;
@property (retain, nonatomic) UILabel *selectDiskSizeLabel;
@property (weak, nonatomic) id<IESIMChatDiskCleanDataInterface> dataProvider;
@property (weak, nonatomic) id<IESIMChatDiskCleanListInterface> listService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setupBind;
- (void)selectAllButtonClicked:(id)a0;
- (void)cleanButtonClicked:(id)a0;
- (void)p_showCleanPopupWithDeleteChat:(BOOL)a0 fileTypeStr:(id)a1 diskSize:(long long)a2;
- (void).cxx_destruct;
- (void)createUI;

@end
