@interface AWEStoryImpl.StoryListContentCell : AWEStoryBizUI.StoryListBaseCell <AFDRichContentProgressControllerDelegate, AFDRichContentContainerDelegate, AWEPlayVideoDelegate> {
    void /* unknown type, empty encoding */ contentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playbackControlView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumIndexTagView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerPlaceholder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressPlaceholder;
    void /* unknown type, empty encoding */ contentAspectRatio;
}

- (void)richContainerDidCreateProgressView:(id)a0;
- (void)didUpdatePaginatedProgressWithIndex:(long long)a0 totalCount:(long long)a1;
- (id)progressConfig;
- (void)updateCurrentAwemeModel:(id)a0;
- (void)containerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 didUpdateFromPlayViewController:(id)a1;
- (void)showLoadingAnimation;
- (void)stopLoadingAniamtion;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
