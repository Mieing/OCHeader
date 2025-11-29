@class NSString;

@interface HomeWepkgDataCleaner : MMObject <MMWebViewDelegate>

@property (nonatomic) BOOL needReleasePreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewDidReturn:(id)a0;

@end
