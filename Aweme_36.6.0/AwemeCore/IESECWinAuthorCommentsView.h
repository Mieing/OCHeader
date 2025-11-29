@class NSString, NSArray, UICollectionViewFlowLayout, IESECWinContext, CADisplayLink, CAGradientLayer, IESECWinAuthorObject, IESECWinAuthorCommonConfig;
@protocol IESECWinAuthorCommentsViewDelegate;

@interface IESECWinAuthorCommentsView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    long long _preferredFramsPerSecond;
    double _displacementOffset;
    long long _originalArrayCount;
    BOOL _stopeDisplayLinkAction;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *modelArray;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECWinAuthorObject *object;
@property (retain, nonatomic) IESECWinAuthorCommonConfig *config;
@property (weak, nonatomic) id<IESECWinAuthorCommentsViewDelegate> commentsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)generateGradientLayer;
- (void)installParams;
- (void)setDisplayLink;
- (void)setDataSourceWithIsLoop:(BOOL)a0;
- (double)getCellWidthWithIndexPath:(id)a0;
- (double)getOriginalCellWidth;
- (void)bindWithModelArray:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isLoop;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfSections;
- (void)dealloc;
- (void)displayLinkAction;

@end
