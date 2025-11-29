@protocol AWEVideoInteractiveProtocol;

@interface AWEMultiContentImageTextTransitionController : AWEBaseController <AWEViewControllerLifeCycle, AFDAlbumDetailTransitionOuterContextProvider, AWEFeedAlbumPanelTransitionOuterContextProvider, AWERichContentAlbumTransitionControllerProtocol> {
    void /* unknown type, empty encoding */ searchAdRichAwemeFullPageVC;
}

@property (nonatomic, readonly) id<AWEVideoInteractiveProtocol> currentCellStickerManager;

- (void)setPauseHidden:(BOOL)a0;
- (id)richContentContainer;
- (void)updateAudioPlayWithPlayVideoVC:(id)a0;
- (void)albumDetailTransitionWillBegin;
- (void)albumDetailTransitionDidEnd;
- (void)albumDetailSinkingTransitionWillBegin;
- (void)albumDetailSinkingTransitionDidCancel;
- (void)albumDetailSinkingTransitionDidEnd;
- (void)onAlbumPanelTransitionWillBegin:(unsigned long long)a0;
- (void)onAlbumPanelTransitionDidEnd:(unsigned long long)a0 success:(BOOL)a1;
- (void)syncAudioController:(id)a0;
- (void)albumDetailDidBack;
- (void)albumDetailPinchInTransitionWillBegin;
- (void)albumDetailPinchInTransitionDidCancel;
- (void)albumDetailPinchInTransitionDidEnd;
- (id)outerAlbumContainer;
- (id)interactionViewSnapShot;
- (void)showADRichAwemeFullPageWithCurrentIndex:(long long)a0;
- (void)dismissRichAwemeDetail;
- (void)showFullPageFeedWithPriorityType:(id)a0 commentIDs:(id)a1 highlightID:(id)a2 commentExtraParams:(id)a3 currentIndex:(long long)a4 logExtra:(id)a5;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (id)progressBarView;

@end
