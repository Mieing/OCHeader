@interface AWEInteractionNoticeBaseCellController : AWEBaseListCellController <AFDProfileAvatarZoomTransitionOuterContextProvider, AWEIMStreakDisplayManagerDelegate, NSObject, AFDCloseFriendsColorRingDisplayManagerDelegate, AWEZoomTransitionOuterContextProvider> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ capturedCurrentCell;
    void /* unknown type, empty encoding */ magicTapMenu;
    void /* unknown type, empty encoding */ sendMessageCustomActions;
    void /* unknown type, empty encoding */ zoomTransitionStartingView;
    void /* unknown type, empty encoding */ imConsecutiveChatStatusObservable;
    void /* unknown type, empty encoding */ imOnlineStatusObservable;
    void /* unknown type, empty encoding */ cellUnreadStatusObservable;
    void /* unknown type, empty encoding */ titleObservable;
    void /* unknown type, empty encoding */ cfColorRingDisplayTransitionTargetView;
    void /* unknown type, empty encoding */ cfColorRingDisplayAvatarView;
    void /* unknown type, empty encoding */ cfColorRingViewContainerView;
    void /* unknown type, empty encoding */ story25ColorRingDisplayAvatarView;
    void /* unknown type, empty encoding */ story25ColorRingViewContainerView;
    void /* unknown type, empty encoding */ story25ColorRingView;
}

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (void)didBindCellViewModel;
- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (id)zoomTransitionStartView;
- (BOOL)cf_canShowColorRingWithRingStatus:(long long)a0;
- (id)cf_transitionTargetView;
- (void)cf_colorRingViewVisibleStatusChanged;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void)didSelectItem;

@end
