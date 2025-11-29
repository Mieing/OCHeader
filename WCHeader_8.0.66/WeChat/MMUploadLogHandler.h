@class NSString;

@interface MMUploadLogHandler : PrivateCommonApiHandler <MMLogViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCommonApiWithParams:(id)a0;
- (void)onMMLogViewControllerClosedWithUploadStatus:(unsigned long long)a0 totalSize:(unsigned long long)a1;

@end
