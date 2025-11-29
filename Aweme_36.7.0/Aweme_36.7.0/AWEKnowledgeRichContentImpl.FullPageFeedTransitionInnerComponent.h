@interface AWEKnowledgeRichContentImpl.FullPageFeedTransitionInnerComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedTransitionInnerComponentProtocol> {
    void /* unknown type, empty encoding */ outerAudioControllerLogExtraDict;
    void /* unknown type, empty encoding */ $__lazy_storage_$_initialScrollAnchorOffset;
    void /* unknown type, empty encoding */ hasInitialScrollAnchor;
    void /* unknown type, empty encoding */ slidesRepeatState;
}

- (void)onContainerViewWillAppear;
- (id)innerVideoController;
- (void)updateAudioPlayWithPlayVideoVC:(id)a0;
- (double)scrollViewContentOffsetY;
- (id)innerAlbumContainer;
- (id)bringInnerAlbumView;
- (void)sendBackInnerAlbumView;
- (double)albumElementWHRatio;
- (void)updateScrollViewContentOffsetY:(double)a0 animated:(BOOL)a1;
- (double)albumEndFrameTopOffset;
- (id)navBarTopAvatarView;
- (id)customAspectRatioLimit;
- (void)albumDetailTransitionWillBegin;
- (void)albumDetailTransitionDidEnd;
- (void)albumDetailSinkingTransitionWillBegin;
- (void)albumDetailSinkingTransitionDidCancel;
- (void)albumDetailSinkingTransitionDidEnd;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)preferredTransitionProviderClassNameFor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
