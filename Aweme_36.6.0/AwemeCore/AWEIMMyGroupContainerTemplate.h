@class NSString, IESIMContactPickerConfiguration;

@interface AWEIMMyGroupContainerTemplate : NSObject <IESIMContactPickerTemplateProtocol>

@property (retain, nonatomic) IESIMContactPickerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentComponentName;
- (id)contentSubComponentNames;
- (id)bottomContainerComponentNames;
- (id)topContainerComponentNames;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
