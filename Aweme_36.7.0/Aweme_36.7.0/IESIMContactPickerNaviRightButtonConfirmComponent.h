@class UIButton, IESIMContactPickerComponentContext, NSString;
@protocol IESIMParticipantsDataManagerProtocol;

@interface IESIMContactPickerNaviRightButtonConfirmComponent : AWEIMComponentBase <IESIMContactPickerSelectAction, IESIMContactPickerNavigationBarAction, IESIMContactPickerRightButtonComponentService>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) id<IESIMParticipantsDataManagerProtocol> participantDataController;
@property (retain, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (id)minimumSelectCount;
- (id)maximumSelectCount;
- (void)onNavigationbarInstall;
- (void)__didClickSelectAll;
- (void)__tryUpdateSelectButtonStatus;
- (void).cxx_destruct;
- (id)rightButton;
- (id)componentView;

@end
