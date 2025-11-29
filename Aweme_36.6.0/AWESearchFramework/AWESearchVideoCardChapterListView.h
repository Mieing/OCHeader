@class NSArray, UIImageView, UICollectionView, NSDictionary, NSString, UIButton;

@interface AWESearchVideoCardChapterListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *allBtnGradientImageView;
@property (retain, nonatomic) UIButton *allBtn;
@property (retain, nonatomic) NSArray *chapterList;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL hasScroll;
@property (nonatomic) BOOL allowHandlePlayedTime;
@property (nonatomic) double currentPlayTime;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ chapterInfoDidClick;
@property (copy, nonatomic) id /* block */ chapterListAllBtnClick;
@property (copy, nonatomic) id /* block */ chapterListGetCurrentPlayedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fixChapterListCrashV2;

- (void)scrollToIndex:(long long)a0 animation:(BOOL)a1;
- (void)configDataWithChapterList:(id)a0;
- (void)changeChapterWithTime:(double)a0 needScroll:(BOOL)a1;
- (BOOL)fixChapterListCrash;
- (void)updateSelectedCellWithIndex:(long long)a0 needScroll:(BOOL)a1 animated:(BOOL)a2;
- (void)allBtnAction;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
