@class NSString, IESIMContactPickerConfiguration;

@interface AWEIMMentionGroupShareTemplate : NSObject <IESIMContactPickerTemplateProtocol>

@property (retain, nonatomic) IESIMContactPickerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentComponentName;
- (id)contentSubComponentNames;
- (id)bottomContainerComponentNames;
- (id)topContainerComponentNames;
- (id)flexTopContainerComponentNames;
- (id)backgroundComponent;
- (void).cxx_destruct;

@end
