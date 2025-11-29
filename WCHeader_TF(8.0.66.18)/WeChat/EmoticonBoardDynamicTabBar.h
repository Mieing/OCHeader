@class UIView, NSString, NSArray, CADisplayLink, NSValue, EmoticonTabItem, UIButton, NSMutableArray, UICollectionView, EmoticonBoardDynamicTabBarLayout, MMTimer;
@protocol EmoticonBoardDynamicTabBarDelegate;

@interface EmoticonBoardDynamicTabBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    CADisplayLink *_transitionDisplayLink;
    long long _progressCount;
    long long _currentCount;
    NSValue *_recentTouchPointValue;
    double _transitionPositionPercent;
    MMTimer *_countDownTimer;
    EmoticonTabItem *_settingItem;
    EmoticonTabItem *_plusItem;
    EmoticonTabItem *_searchItem;
    EmoticonTabItem *_aiRecommendItem;
}

@property (retain, nonatomic) NSMutableArray *innerTabItems;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *foldButton;
@property (retain, nonatomic) UIView *buttonFloatingBackgroundView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) EmoticonBoardDynamicTabBarLayout *collectionLayout;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<EmoticonBoardDynamicTabBarDelegate> delegate;
@property (retain, nonatomic) NSString *selectedPid;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) BOOL hasFloatingFoldButton;
@property (nonatomic) BOOL hasPlusButton;
@property (nonatomic) BOOL hasSettingButton;
@property (nonatomic) BOOL hasSearchButton;
@property (nonatomic) BOOL hasRecommendButton;
@property (retain, nonatomic) NSArray *emoticonTabItems;
@property (readonly, nonatomic) unsigned long long tabCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configCollectionViewLayout;
- (void)configCollectionView;
- (void)configHardcodeEmoticonItems;
- (void)configButtons;
- (void)reloadData;
- (void)setSelectedPid:(id)a0 shouldAdjustContentOffset:(BOOL)a1;
- (void)onClickFloatingButton;
- (struct CGPoint { double x0; double x1; })safeXContentOffsetFromContentOffset:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
