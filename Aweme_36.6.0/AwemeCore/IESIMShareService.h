@class NSString;

@interface IESIMShareService : HTSService <IESIMShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchIMModelDescItemArrayWithModel:(id)a0 completion:(id /* block */)a1;
- (void)acquireUserActiveWithTranspondList:(id)a0 completion:(id /* block */)a1;
- (void)trackSharePanelPerformanceWithParams:(id)a0;
- (void)showPanelWithSeriesEmoji:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2;
- (id)groupShareContextWithInsideImage:(id)a0 syncedExt:(id)a1;
- (id)showPanelWithGroupChatContext:(id)a0 onViewController:(id)a1;
- (void)generateGroupScreenShotQRCodeWithContext:(id)a0 completion:(id /* block */)a1;
- (id)groupQRCodePanelContextWithImage:(id)a0;
- (id)showGroupQRCodePanelWithContext:(id)a0 topViewProvider:(id /* block */)a1 onViewController:(id)a2;
- (id)sheetViewForSharePanel:(id)a0;
- (void)shortenURLWithContext:(id)a0 outExtraParams:(id)a1 persistent:(BOOL)a2 completion:(id /* block */)a3;
- (id)linkStringFormatWithSplitWord:(id)a0 description:(id)a1 urlString:(id)a2;
- (BOOL)isWechatPlatformInstalled;
- (BOOL)isQQPlatformInstalled;
- (BOOL)isShareTypeQRCodeWithIESIMShareType:(long long)a0;
- (BOOL)isShareToIMWithIESIMShareType:(long long)a0;
- (BOOL)isShareTargetTypeIronMan:(long long)a0;
- (BOOL)isInvalidShareTargetType:(long long)a0;
- (BOOL)isLiveShareTargetType:(long long)a0;
- (BOOL)isPOIShareTargetType:(long long)a0;
- (BOOL)isReeditShareTargetType:(long long)a0;
- (void)showPanelWithGroupModel:(id)a0 onViewController:(id)a1;
- (void)showPanelWithUser:(id)a0 onViewController:(id)a1;
- (void)showQRCodeViewControllerWithShareGroupModel:(id)a0 platformType:(long long)a1 settingShareMode:(long long)a2;
- (void)groupQRCodeImageForGroup:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchIMModelDescAttributedTitleWithShareModel:(id)a0 flameFont:(id)a1 flameSize:(struct CGSize { double x0; double x1; })a2 spacing:(double)a3 needOnlineTextTail:(BOOL)a4 attrStringMaxWidth:(double)a5 defaultAttrs:(id)a6 imStreakDisplayManager:(id)a7 completion:(id /* block */)a8;
- (void)tryHandleShortUrlWithString:(id)a0;
- (id)createShareGroupModel;
- (id)createShareContext;
- (id)shareContextWithShareGroupModel:(id)a0 customToast:(id)a1;
- (void)transferToVerticalSelectionPanelWithParamsDict:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchGroupShareCommandWithConversationId:(id)a0 completion:(id /* block */)a1;
- (void)forwardMessage:(id)a0 params:(id)a1;
- (long long)p_btdShareTypeFromIESIMShareType:(long long)a0;
- (long long)p_aweSettingShareModeFromIESIMSettingShareMode:(long long)a0;

@end
