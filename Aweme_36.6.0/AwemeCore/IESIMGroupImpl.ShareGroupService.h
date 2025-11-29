@interface IESIMGroupImpl.ShareGroupService : HTSService <IESIMShareGroupServiceInterface>

- (void)qrCodeImageWitCon:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)showUpdateGroupQRCodeExpirationTimePanelForCon:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)isSupportGroupLinkWithConversation:(id)a0;
- (BOOL)canFetchGroupLinkWithConversation:(id)a0;
- (BOOL)enableSocialShareGroupQRCodeV2ForCon:(id)a0;
- (void)showShareGroupQRCodePanelWitCon:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)enableShareGroupQRCodeV2ForCon:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
