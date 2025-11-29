@class RPSystemBroadcastPickerView, NSString;

@interface IESLiveScreencastSystemAwakenControllerImpl : NSObject <IESLiveScreencastSystemAwakenController>

@property (retain, nonatomic) RPSystemBroadcastPickerView *pickerView;
@property (nonatomic) BOOL pickerViewShowing;
@property (retain, nonatomic) NSString *appSchemeUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentSystemScreencastControlPanel;
- (id)screencastPickerViewController;
- (void)dismissSystemScreencastControlPanel;
- (id)initWithPreferredExtension:(id)a0;
- (void)dismissSystemScreencastControlPanelWithOpenUrl;
- (void).cxx_destruct;

@end
