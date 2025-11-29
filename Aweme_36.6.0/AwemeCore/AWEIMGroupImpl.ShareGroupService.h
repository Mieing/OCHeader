@interface AWEIMGroupImpl.ShareGroupService : HTSService <AWEIMShareGroupServiceInterface>

- (BOOL)enableShareGroupQRCodeV2ForCid:(id)a0;
- (void)showShareGroupQRCodePanelWitCid:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (id)init;

@end
