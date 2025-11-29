@class UIView, UILongPressGestureRecognizer, NSString, UICollectionViewFlowLayout, UIImageView, EmoticonStoreReportInfo, EmoticonPreviewWindowViewController, UICollectionView, UILabel, NSIndexPath;
@protocol EmoticonDesignerRichPortfolioCellDelegate;

@interface EmoticonDesignerRichPortfolioCell : MMStoreEmotionBaseAllCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, EmoticonPreviewWindowViewControllerDelegate>

@property (retain, nonatomic) UIView *bottomViewContainer;
@property (retain, nonatomic) UICollectionView *emojiCollection;
@property (retain, nonatomic) UIView *downloadAndSendCountView;
@property (retain, nonatomic) UICollectionViewFlowLayout *emojiCollectionLayout;
@property (nonatomic) double cellSize;
@property (nonatomic) unsigned long long cellNum;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UILabel *sendCountLabel;
@property (retain, nonatomic) UILabel *downloadCountLabel;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UIImageView *sendImageView;
@property (retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview;
@property (weak, nonatomic) id<EmoticonDesignerRichPortfolioCellDelegate> delegate;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (nonatomic) BOOL showDownloadView;
@property (nonatomic) BOOL needStaticsInfo;
@property (nonatomic) BOOL useTransparentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calcHeightWithIsShowCount:(BOOL)a0 emojiCount:(unsigned long long)a1 cellWidth:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void)createOrUpdateLayout;
- (id)downloadLogicConfig;
- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)a0;
- (void)updateDownloadAndSendLabel;
- (void)configGestureRecognizer;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)layoutBottomContainer;
- (void)layoutDownloadAndSendCountView;
- (void)layoutBaseViewContainer;
- (void)calculateCellSize;
- (void)initBottomViewContainer;
- (void)initCollectionView;
- (void)initDownloadAndSendCountView;
- (BOOL)isRewardEnabled;
- (void)clearReddotIfNeeded;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleReward;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (double)downloadViewMaxWidth;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onLongPressToPreview:(id)a0;
- (void)onFinishPreviewAndChangeToPid:(id)a0;
- (void)onShouldShowEmoticonDetailPage:(id)a0;
- (void).cxx_destruct;

@end
