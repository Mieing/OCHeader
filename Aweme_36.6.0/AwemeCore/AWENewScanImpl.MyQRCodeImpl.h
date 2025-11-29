@interface AWENewScanImpl.MyQRCodeImpl : HTSService <HTSService, AWEMyQRCodeRouter>

- (void)openMyQRCodeWithUser:(id)a0 fromController:(id)a1 trackDict:(id)a2;
- (void)openMyQRCodeWithUser:(id)a0 fromController:(id)a1 enableDragToClose:(BOOL)a2 trackDict:(id)a3;
- (id)init;

@end
