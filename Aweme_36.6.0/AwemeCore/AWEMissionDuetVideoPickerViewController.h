@class UIView, AWEStudioRepoMissionModel, NSArray, NSString, AWEMissionDuetVideoPickerFlowLayout, UIButton, NSDictionary, AWEChallengeModel, UICollectionView, UIVisualEffectView, UILabel, AWETaskModel;

@interface AWEMissionDuetVideoPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEMissionDuetVideoPickerViewController>

@property (retain, nonatomic) NSArray *duetAwemes;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIButton *duetButton;
@property (retain, nonatomic) AWEMissionDuetVideoPickerFlowLayout *collectionViewLayout;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) AWEStudioRepoMissionModel *missionModel;
@property (nonatomic) unsigned long long startScrollIndex;
@property (retain, nonatomic) NSDictionary *argumentsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWETaskModel *mission;
@property (readonly, nonatomic) AWEChallengeModel *challenge;
@property (readonly, nonatomic) NSDictionary *studioInfo;
@property (copy, nonatomic) id /* block */ didClickShootButton;

- (id)initWithMission:(id)a0 studioInfo:(id)a1 missionModel:(id)a2;
- (id)initWithChallenge:(id)a0 studioInfo:(id)a1;
- (id)initWithMission:(id)a0 studioInfo:(id)a1 missionModel:(id)a2 argumentsDict:(id)a3;
- (void)closeButtonAction:(id)a0;
- (void)shootButtonAction:(id)a0;
- (void)duetButtonAction:(id)a0;
- (void)playVideoAtIndex:(unsigned long long)a0;
- (void)startObservingApplicationStateChanges;
- (void)pauseVideoAtIndex:(unsigned long long)a0;
- (void)endObservingApplicationStateChanges;
- (id)backgroundImageViewForIndexPath:(id)a0;
- (void)updatePageLabel;
- (void)updateSelectedIndex;
- (void)stopVideoAtIndex:(id)a0;
- (void)updateBackgroundViews;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
