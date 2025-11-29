@class NSMutableDictionary, UICollectionView, NSString, NSMutableArray;
@protocol MMFinderLiveQuickReplyViewDelegate;

@interface MMFinderLiveQuickReplyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) NSMutableDictionary *sendMsgDictionary;
@property (nonatomic) BOOL isPerformingBatchUpdate;
@property (nonatomic) BOOL reloadAfterBatchUpdate;
@property (nonatomic) BOOL isVisible;
@property (weak, nonatomic) id<MMFinderLiveQuickReplyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData:(id)a0;
- (void)autoScrollToIndex:(id)a0;
- (void)updateQuickReplySendTime;
- (void)onVisibilityChanged:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reportQuickReplyWithModel:(id)a0 indexPath:(id)a1 actionType:(unsigned long long)a2;
- (void)reportRecommendCommentExposeWithModel:(id)a0;
- (void)reportRecommendCommentClickWithModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (BOOL)isDisplayingPaidFloatMsg;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)judgeOverTime:(id)a0;
- (double)getUserStaySecond:(id)a0;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)bindYReportSdk:(id)a0 andViewId:(id)a1;
- (void).cxx_destruct;

@end
