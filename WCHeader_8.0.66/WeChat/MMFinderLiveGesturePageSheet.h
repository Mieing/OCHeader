@class UIView, NSString, NSArray, UISwitch, UIImageView, MMFinderLiveTaskId, UICollectionView, UILabel;
@protocol MMFinderLiveGesturePageSheetDelegate;

@interface MMFinderLiveGesturePageSheet : MMPageSheetBaseView <UICollectionViewDataSource, MMFinderLiveGestureLogicExt>

@property (retain, nonatomic) UIView *switchSectionView;
@property (retain, nonatomic) UILabel *switchTitleLabel;
@property (retain, nonatomic) UILabel *switchSubtitleLabel;
@property (retain, nonatomic) UIView *switchContainerView;
@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL showHint;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *hintContainerView;
@property (retain, nonatomic) UIImageView *hintIconView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) unsigned long long currentHintIndex;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSArray *gestureItems;
@property (weak, nonatomic) id<MMFinderLiveGesturePageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onGestureAnimationInvokedForGestureId:(id)a0 taskId:(id)a1;
- (void)setupPageSheetConfig;
- (id)liveTask;
- (void)showNextHint;
- (void)hideHint;
- (void)invalidateHint;
- (void).cxx_destruct;

@end
