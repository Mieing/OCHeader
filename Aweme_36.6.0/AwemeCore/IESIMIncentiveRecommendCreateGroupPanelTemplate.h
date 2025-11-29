@class NSString;

@interface IESIMIncentiveRecommendCreateGroupPanelTemplate : NSObject <IESIMContactPickerTemplateProtocol>

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

@end
