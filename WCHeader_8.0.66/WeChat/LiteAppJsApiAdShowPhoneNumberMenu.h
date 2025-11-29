@class NSString;

@interface LiteAppJsApiAdShowPhoneNumberMenu : LiteAppJsApiAdBase <WCActionSheetDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;

@end
