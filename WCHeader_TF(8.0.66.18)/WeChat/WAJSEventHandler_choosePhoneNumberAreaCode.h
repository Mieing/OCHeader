@class NSString;

@interface WAJSEventHandler_choosePhoneNumberAreaCode : WAJSEventHandler_BaseEvent <CountryCodePickerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)CountryCodePickerDidPickCountryCode:(id)a0;
- (void)CountryCodePickerQuitWithoutPick;

@end
