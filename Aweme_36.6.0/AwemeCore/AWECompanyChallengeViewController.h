@class AWEAwemeModel, NSString, NSArray, AWEGeneralSearchModel, AWEUserModel, NSMutableDictionary, AWEOriginalAdModel, NSMutableArray, UICollectionView, UILabel;
@protocol AWECompanyChallengeViewControllerDelegate;

@interface AWECompanyChallengeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECompanyChallengeViewController>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSMutableArray *challengeList;
@property (retain, nonatomic) NSMutableArray *taskList;
@property (retain, nonatomic) NSArray *adNewStyleInfoList;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (nonatomic) BOOL shouldHideTitle;
@property (nonatomic) long long preferredMinimumInteritemSpacing;
@property (nonatomic) BOOL canShowAppearTracker;
@property (nonatomic) BOOL didTrackTaskShow;
@property (copy, nonatomic) NSString *renderTheme;
@property (weak, nonatomic) id<AWECompanyChallengeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)recommendHeight:(BOOL)a0;
+ (double)taskRecommendHeight;

- (void)configWithModel:(id)a0;
- (void)updateWithTheme:(id)a0;
- (void)configWithModel:(id)a0 isLogSent:(BOOL)a1 hideTitle:(BOOL)a2;
- (BOOL)shouldShowTaskCell;
- (void)configTaskWithModel:(id)a0;
- (void)configChallengeWithModel:(id)a0 isLogSent:(BOOL)a1 hideTitle:(BOOL)a2;
- (void)_layoutSubViewsFrame;
- (BOOL)shouldShowSearchNewStyleCell;
- (BOOL)isSameArray:(id)a0 with:(id)a1;
- (void)trackNewStyleCellShow;
- (void)trackChallengeTopicShow;
- (void)selectAdNewStyleCellAt:(long long)a0;
- (void)selectTaskAt:(long long)a0;
- (void)selectChallengeAt:(long long)a0;
- (struct CGSize { double x0; double x1; })adNewStyleCellSizeAt:(long long)a0;
- (struct CGSize { double x0; double x1; })taskSizeAt:(long long)a0;
- (struct CGSize { double x0; double x1; })challengeSizeAt:(long long)a0;
- (id)ironManURLWithURL:(id)a0;
- (void)configWithSearchModel:(id)a0 isLogSent:(BOOL)a1;
- (void)configWithStarModel:(id)a0 hideTitle:(BOOL)a1;
- (void)configWithModel:(id)a0 isLogSent:(BOOL)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupUI;

@end
