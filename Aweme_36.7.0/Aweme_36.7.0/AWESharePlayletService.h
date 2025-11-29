@class NSString;

@interface AWESharePlayletService : AWEShareCommonImpl <AWESharePlaylet>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithPlayletInfo:(id)a0 previousPage:(id)a1 onViewController:(id)a2;
- (id)statsShareMixVideoStage;
- (id)contextFromPlayletVideo:(id)a0;

@end
