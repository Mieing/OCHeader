@class NSMutableArray, IESLiveLyricViewConfig;

@interface IESLiveKTVLyricCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSMutableArray *allAttributeCache;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (nonatomic) long long singingLine;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
