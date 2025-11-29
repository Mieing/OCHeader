@class NSString;

@interface AWEShareUserBaseService : AWEShareCommonImpl <AWEShareUser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPanelWithUser:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2;
- (id)contextWithUser:(id)a0;
- (id)profileQRCodeContentViewWithUser:(id)a0;
- (id)rebrandUserQRCodeImageWithContext:(id)a0 qrCodeImage:(id)a1 templateModel:(id)a2;
- (id)taskWithUser:(id)a0;
- (void)addCustomHandlerWithPanelConfiguration:(id)a0;
- (id)unexpectedShareTypesWithContext:(id)a0;
- (id)configurationWithUser:(id)a0;
- (id)statsShareUserStage;

@end
