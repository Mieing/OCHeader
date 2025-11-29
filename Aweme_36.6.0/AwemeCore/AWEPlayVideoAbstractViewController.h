@class NSArray, UICollectionView, NSString, UILabel, NSMutableArray;

@interface AWEPlayVideoAbstractViewController : AWEPlayVideoTextViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *topicSentenceLabel;
@property (nonatomic) double topicSentenceLabelHeight;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *dataStrArray;
@property (nonatomic) long long selecteIndex;
@property (nonatomic) double lastPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackVideoTitleWithAwemeType:(id)a0 actionType:(id)a1;
- (void)updateSectionStatusWithTime:(double)a0;
- (id)getCellContentWithString:(id)a0;
- (double)abstractCellHeightWithModel:(id)a0 attributedString:(id)a1;
- (double)cellHeightWithAttributedString:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)scrollView;
- (void)viewDidLoad;
- (BOOL)isAbstract;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
