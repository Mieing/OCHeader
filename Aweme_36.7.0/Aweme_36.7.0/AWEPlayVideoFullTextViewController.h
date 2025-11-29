@class NSString, NSArray, UICollectionView, NSDictionary, AWEPlayVideoAbstractBottomComponent, NSMutableArray, AWEPlayAiToTextComplianceNoticeView;

@interface AWEPlayVideoFullTextViewController : AWEPlayVideoTextViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEPlayVideoAbstractBottomComponentDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *dataStrArray;
@property (nonatomic) long long selecteIndex;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double lastPlayTime;
@property (retain, nonatomic) AWEPlayVideoAbstractBottomComponent *bottomView;
@property (retain, nonatomic) AWEPlayAiToTextComplianceNoticeView *complianceNoticeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackVideoTitleWithAwemeType:(id)a0 actionType:(id)a1;
- (void)updateSectionStatusWithTime:(double)a0;
- (void)abstractBottomComponentDidClick;
- (id)getCellContentWithModel:(id)a0;
- (double)cellHeightWithModel:(id)a0 attributedString:(id)a1 indexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)scrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateWithModel:(id)a0;

@end
