@class AWESearchSeedFilterViewUtil, NSString, AWESearchSeedFilterDoubleSectionView;
@protocol AWESearchSeedContentViewDelegate;

@interface AWESearchSeedContentView : UIView <AWESearchSeedFilterDoubleSectionViewDelegate>

@property (retain, nonatomic) AWESearchSeedFilterDoubleSectionView *doubleContView;
@property (weak, nonatomic) id<AWESearchSeedContentViewDelegate> delegate;
@property (retain, nonatomic) AWESearchSeedFilterViewUtil *configInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightForFilterModel:(id)a0;

- (void)configureUI;
- (void)selectedIndexPath:(id)a0;
- (void)filterCollectionView:(id)a0 didSelectIndex:(id)a1 lastSelected:(id)a2;
- (double)getRealScreenWidth;
- (double)sizeForInner:(id)a0;
- (id)congfigPosition;
- (void)configureWithModel:(id)a0 selectedIndex:(id)a1;
- (void).cxx_destruct;

@end
