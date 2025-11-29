@class IESIMContactPickerVideoDispatchGroupDataProvider, NSString, IESIMContactPickerController, IESIMSelectJoinGroupPanelOpenCapabilityModel, IESIMContactPickerViewController;

@interface IESIMSelectJoinGroupPanelUtil : NSObject <AWEIMHalfScreenContainerVCDelegate, IESIMContactPickerVideoDispatchGroupDataProviderDelegate>

@property (retain, nonatomic) IESIMSelectJoinGroupPanelOpenCapabilityModel *openCapabilityModel;
@property (retain, nonatomic) IESIMContactPickerVideoDispatchGroupDataProvider *contactProvider;
@property (weak, nonatomic) IESIMContactPickerController *pickerController;
@property (weak, nonatomic) IESIMContactPickerViewController *pickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)externalAssignTopDragHeight;
- (double)dragHintViewTopMargin;
- (void)halfScreenContainerVCDidDismiss:(id)a0;
- (void)showSelectJoinGroupPanelWithCompletion:(id /* block */)a0;
- (void)refreshView;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didTapCloseButton;

@end
