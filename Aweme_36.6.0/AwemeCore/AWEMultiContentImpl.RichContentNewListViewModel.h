@class AWEAwemeModel;
@protocol AFDRichContentBaseSectionViewModelProtocol, AFDRichContentHandlerProtocol;

@interface AWEMultiContentImpl.RichContentNewListViewModel : BDMultiContentContainer.BaseContentListViewModel <AFDRichContentListViewModelProtocol, AWEUserMessage> {
    void /* unknown type, empty encoding */ _enableEnteringProfile;
    void /* unknown type, empty encoding */ _pinchTransitionEnabled;
    void /* unknown type, empty encoding */ preloadManager;
    void /* unknown type, empty encoding */ isKeyboardShowing;
    void /* unknown type, empty encoding */ currentAwemeId;
    void /* unknown type, empty encoding */ isCurrentTopVC;
    void /* unknown type, empty encoding */ isCurrentSectionNeedLoop;
    void /* unknown type, empty encoding */ lastInteractionModelItemID;
    void /* unknown type, empty encoding */ hasBouncedOnce;
    void /* unknown type, empty encoding */ triggerBounceChangeTimer;
}

@property (nonatomic, retain) AWEAwemeModel *awemeModel;
@property (nonatomic, readonly) id<AFDRichContentBaseSectionViewModelProtocol> currentSectionVM;
@property (nonatomic, readonly) id<AFDRichContentHandlerProtocol> listContentHandler;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL enableEnteringProfile;
@property (nonatomic) BOOL isFrameAnimationActive;
@property (nonatomic) BOOL shouldPrepareForDisplay;

- (void)trackMultiGroupSlideWithCurrentIndex:(long long)a0 withMethod:(unsigned long long)a1;
- (long long)sectionIndexWithAwemeModel:(id)a0;
- (long long)getTotalItemCount;
- (void)trackDiaryFolderSlideFromIndex:(long long)a0 toIndex:(long long)a1 withMethod:(unsigned long long)a2;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)setupViewModel;
- (id)currentAwemeModel;
- (id)retrieveLastInteractionModelItemID;
- (void)syncLastInteractionModelItemID:(id)a0;
- (BOOL)shouldShowPaginatedProgressView;
- (void)createFinishTrackTriggerIfNeeded;
- (void)transferFinishTrackTriggerTo:(id)a0;
- (void)resetFinishTrackTrigger;
- (void)onDeleteNotificationWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
