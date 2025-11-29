@class AWEAwemeModel;

@interface AWEMultiContentImpl.RichContentBaseSectionViewModel : AWEBaseListSectionViewModel <AFDRichContentBaseSectionViewModelProtocol> {
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ isAvailable;
    void /* unknown type, empty encoding */ _isCurrentSection;
    void /* unknown type, empty encoding */ _needGradientLayer;
    void /* unknown type, empty encoding */ _hasFinished;
    void /* unknown type, empty encoding */ _playState;
    void /* unknown type, empty encoding */ _playMode;
    void /* unknown type, empty encoding */ _userScrolled;
    void /* unknown type, empty encoding */ _pauseTimer;
    void /* unknown type, empty encoding */ _isActiveAppearing;
    void /* unknown type, empty encoding */ _paginatedProgress;
    void /* unknown type, empty encoding */ _shouldPrepareForDisplay;
    void /* unknown type, empty encoding */ _innerSlidableIndex;
    void /* unknown type, empty encoding */ pageContextInitialized;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ modernTransitionContext;
    void /* unknown type, empty encoding */ _isScrollAnimationActive;
    void /* unknown type, empty encoding */ shouldInheritSpeed;
    void /* unknown type, empty encoding */ _overlays;
}

@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) BOOL needGradientLayer;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) BOOL isMuted;
@property (nonatomic, readonly) long long innerIndex;
@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic) BOOL isPinching;

- (void)updateByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (double)totalPlayDuration:(BOOL)a0;
- (void)playOrPauseTimer:(BOOL)a0;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;
- (id)init;

@end
