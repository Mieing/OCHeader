@class AWEAwemeModel, NSString, NSArray, NSDictionary, NSMutableArray, UICollectionView, YYLabel, UILabel;

@interface AWECommentVCHeaderVideoAbstractView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWESearchVideoAbstractProtocol>

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) double contentLabelHeight;
@property (nonatomic) double contentLabelWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *topicSentenceLabel;
@property (nonatomic) double topicSentenceLabelHeight;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableArray *dataStrArray;
@property (copy, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double width;
@property (nonatomic) long long selecteIndex;
@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ jumpTimeBlock;

- (void)handleCellStatusWithTime:(double)a0;
- (void)updateWidth:(double)a0;
- (void)updateWithModel:(id)a0 width:(double)a1 trackParams:(id)a2;
- (id)formattedJumpTimeForTime:(id)a0;
- (double)caculateHeightForContent:(id)a0 width:(double)a1;
- (id)getCellContentWithModel:(id)a0;
- (void)updateContentLabelHeightAndWidth;
- (void)updateTopicSentenceLabelHeight;
- (double)cellHeightWithModel:(id)a0 attributedString:(id)a1;
- (double)caculateWidthForContent:(id)a0 height:(double)a1 attributes:(id)a2;
- (void)trackVideoAbstractWithActionType:(id)a0 trackParams:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (double)getHeight;
- (double)collectionViewHeight;

@end
