@class NSNumber;

@interface BDMultiContentContainer.BaseContentListViewModel : AWEBaseListViewModel {
    void /* unknown type, empty encoding */ controllerManager;
    void /* unknown type, empty encoding */ _currentProgress;
    void /* unknown type, empty encoding */ _currentSectionReadyForDisplay;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ _currentHandler;
    void /* unknown type, empty encoding */ isScrollAnimationActive;
    void /* unknown type, empty encoding */ progressObservable;
    void /* unknown type, empty encoding */ hasFinishedObservable;
    void /* unknown type, empty encoding */ currentSectionReadyObservable;
    void /* unknown type, empty encoding */ _currentSlidableIndex;
}

@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, retain) NSNumber *currentDotFromCenter;
@property (nonatomic, readonly) long long currentSectionIndex;
@property (nonatomic, readonly) long long sectionCount;

- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendSectionViewModels:(id)a0;
- (void)setupViewModel;
- (void)replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (void)playByClick:(BOOL)a0;
- (void)pauseByClick:(BOOL)a0;
- (id)indexPathFrom:(long long)a0;
- (long long)indexFrom:(long long)a0;
- (void)cycleUpdateCurrentSectionIndexBy:(long long)a0;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)stopFromDeinit:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
