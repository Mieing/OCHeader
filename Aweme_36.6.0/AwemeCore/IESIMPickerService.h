@class NSString;

@interface IESIMPickerService : HTSService <IESIMPickerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPicker;

@end
