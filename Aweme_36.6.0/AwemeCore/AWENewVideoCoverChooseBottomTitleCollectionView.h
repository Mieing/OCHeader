@class UIView;

@interface AWENewVideoCoverChooseBottomTitleCollectionView : AWECoverChooseBottomTitleCollectionView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;

+ (double)viewHeight;

- (BOOL)shouldShowDefaultText;
- (Class)collectionCellClass;
- (void)configCell:(id)a0 forModel:(id)a1 selected:(BOOL)a2;
- (id)collectionFlowLayout;
- (void)configRetryView:(id)a0 withLabel:(id)a1 andButton:(id)a2;
- (BOOL)shouldForceDisableHintView;
- (void)initSplitLines;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)lineView;

@end
