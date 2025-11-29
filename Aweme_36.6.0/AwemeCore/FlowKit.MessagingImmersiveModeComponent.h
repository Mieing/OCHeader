@interface FlowKit.MessagingImmersiveModeComponent : FlowCommon.TightCouplingComponent <FlowKit.MessagingListViewEventListener, FlowVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _navigationBarComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ initImmerseMode;
    void /* unknown type, empty encoding */ initImmerseColor;
    void /* unknown type, empty encoding */ initImmerseImageUrl;
    void /* unknown type, empty encoding */ collectionViewBottomGradient;
    void /* unknown type, empty encoding */ shouldFadeInWillDisplayCells;
    void /* unknown type, empty encoding */ immersiveBgColor;
    void /* unknown type, empty encoding */ immersiveHalfHeight;
    void /* unknown type, empty encoding */ isImmersiveInitState;
    void /* unknown type, empty encoding */ immersiveModeEnable;
    void /* unknown type, empty encoding */ isHalfScreenStyle;
    void /* unknown type, empty encoding */ beginDragging;
    void /* unknown type, empty encoding */ isHistorySelected;
    void /* unknown type, empty encoding */ immersiveMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_immersiveRefreshFooter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_immersiveRefreshHeader;
    void /* unknown type, empty encoding */ shouldShowMessageFold;
    void /* unknown type, empty encoding */ isFirstTimeUpdateMessageFold;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ immersiveBgVideoPlayer;
    void /* unknown type, empty encoding */ enableImmersiveBgVideo;
    void /* unknown type, empty encoding */ isImmersiveBgVideoPlaying;
    void /* unknown type, empty encoding */ immersiveBgVideoPlaybackCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationMessageFoldButton;
}

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)disableDynamicBackground;
- (void)videoPlayer:(id)a0 playbackStateDidChange:(long long)a1;
- (void)videoPlayer:(id)a0 loadStateDidChange:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
