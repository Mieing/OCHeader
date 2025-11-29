@class NSNumber, AWEAwemeModel;
@protocol AFDRichContentBaseSectionViewModelProtocol, AFDRichContentHandlerProtocol;

@interface AWEMultiContentImpl.RichContentListViewModel : AWEBaseListViewModel <AFDRichContentListViewModelProtocol, AWEUserMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ isScrollAnimationActive;
    void /* unknown type, empty encoding */ _pinchTransitionEnabled;
    void /* unknown type, empty encoding */ _enableEnteringProfile;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ preloadManager;
    void /* unknown type, empty encoding */ isCurrentTopVC;
    void /* unknown type, empty encoding */ isCurrentSectionNeedLoop;
    void /* unknown type, empty encoding */ currentAwemeId;
    void /* unknown type, empty encoding */ lastInteractionModelItemID;
    void /* unknown type, empty encoding */ progressObservable;
    void /* unknown type, empty encoding */ hasFinishedObservable;
    void /* unknown type, empty encoding */ isKeyboardShowing;
    void /* unknown type, empty encoding */ _currentSlidableIndex;
    void /* unknown type, empty encoding */ businessProgressItemCount;
    void /* unknown type, empty encoding */ _currentProgress;
    void /* unknown type, empty encoding */ hasBouncedOnce;
    void /* unknown type, empty encoding */ triggerBounceChangeTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_handlers;
    void /* unknown type, empty encoding */ _currentHandler;
}

@property (nonatomic, readonly) id<AFDRichContentBaseSectionViewModelProtocol> currentSectionVM;
@property (nonatomic, readonly) id<AFDRichContentHandlerProtocol> listContentHandler;
@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL enableEnteringProfile;
@property (nonatomic) BOOL isFrameAnimationActive;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic, readonly) long long sectionCount;
@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, retain) NSNumber *currentDotFromCenter;
@property (nonatomic, readonly) long long currentSectionIndex;

- (void)trackMultiGroupSlideWithCurrentIndex:(long long)a0 withMethod:(unsigned long long)a1;
- (id)retrieveLastInteractionModelItemID;
- (void)syncLastInteractionModelItemID:(id)a0;
- (long long)getTotalItemCount;
- (void)trackDiaryFolderSlideFromIndex:(long long)a0 toIndex:(long long)a1 withMethod:(unsigned long long)a2;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)playByClick:(BOOL)a0;
- (void)pauseByClick:(BOOL)a0;
- (void)cycleUpdateCurrentSectionIndexBy:(long long)a0;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)appendSectionViewModels:(id)a0;
- (void)setupViewModel;
- (void)replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (id)currentAwemeModel;
- (id)indexPathFrom:(long long)a0;
- (long long)indexFrom:(long long)a0;
- (long long)sectionIndexWithAwemeModel:(id)a0;
- (BOOL)shouldShowPaginatedProgressView;
- (void)createFinishTrackTriggerIfNeeded;
- (void)transferFinishTrackTriggerTo:(id)a0;
- (void)resetFinishTrackTrigger;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)onDeleteNotificationWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
