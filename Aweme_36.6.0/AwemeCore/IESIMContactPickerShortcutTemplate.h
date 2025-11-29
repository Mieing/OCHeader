@class NSString, IESIMContactPickerConfiguration;

@interface IESIMContactPickerShortcutTemplate : NSObject <IESIMContactPickerTemplateProtocol>

@property (retain, nonatomic) IESIMContactPickerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortcutTemplateWithConfiguration:(id)a0;

- (id)contentComponentName;
- (id)contentSubComponentNames;
- (id)bottomContainerComponentNames;
- (id)topContainerComponentNames;
- (id)flexTopContainerComponentNames;
- (id)backgroundComponent;
- (id)navigationBarRightButtonComponentName;
- (void)__parserSelectConfigIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
