@class NSString;

@interface IESIMContactPickerCustomBackgroundComponent : AWEIMComponentBase <IESIMContactPickerComponentViewProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentView;

@end
