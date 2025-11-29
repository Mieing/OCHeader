@class NSString, AWETeenFeedDoubleColumnViewController, AWETeenVideoDetailFeedViewController;

@interface AWETeenFeedDoubleColumnSectionController : AWEBaseListSectionController <AWETeenFeedDoubleColumnMessage>

@property (weak, nonatomic) AWETeenFeedDoubleColumnViewController *doubleColumnVC;
@property (nonatomic) double itemWidth;
@property (weak, nonatomic) AWETeenVideoDetailFeedViewController *currentDetailVC;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long entranceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)removeCachedCellSizeWithAwemeID:(id)a0;
- (void)p_trackSquareShow:(BOOL)a0 WithIndex:(long long)a1 model:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)separatorColor;
- (id)init;
- (id)sectionBackgroundColor;
- (void)dealloc;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
