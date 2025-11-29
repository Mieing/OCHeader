@interface BDMultiContentContainer.BaseContentSectionViewModel : AWEBaseListSectionViewModel {
    void /* unknown type, empty encoding */ pageContextInitialized;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ serviceContainer;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ _readyForDisplay;
    void /* unknown type, empty encoding */ isAvailable;
    void /* unknown type, empty encoding */ _userScrolled;
    void /* unknown type, empty encoding */ _isCurrentSection;
    void /* unknown type, empty encoding */ _hasFinished;
    void /* unknown type, empty encoding */ playStateLogToken;
    void /* unknown type, empty encoding */ _playState;
    void /* unknown type, empty encoding */ paginatedProgressLogToken;
    void /* unknown type, empty encoding */ _paginatedProgress;
    void /* unknown type, empty encoding */ _innerSlidableIndex;
    void /* unknown type, empty encoding */ _isScrollAnimationActive;
    void /* unknown type, empty encoding */ pauseTimerLogToken;
    void /* unknown type, empty encoding */ _pauseTimer;
    void /* unknown type, empty encoding */ isActiveAppearingLogToken;
    void /* unknown type, empty encoding */ _isActiveAppearing;
    void /* unknown type, empty encoding */ _playMode;
    void /* unknown type, empty encoding */ _shouldPrepareForDisplay;
    void /* unknown type, empty encoding */ _needGradientLayer;
    void /* unknown type, empty encoding */ _overlays;
}

@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic, readonly) long long innerIndex;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL needGradientLayer;

- (void).cxx_destruct;
- (id)init;

@end
