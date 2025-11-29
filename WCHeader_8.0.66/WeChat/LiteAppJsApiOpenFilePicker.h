@class NSString;

@interface LiteAppJsApiOpenFilePicker : LiteAppJsApi <WCFileBrowseDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onFileBrowserCancel;
- (void)onFileBrowseMultiSelect:(id)a0;

@end
