@class NSString;

@interface AWEBaseDetailHeaderSectionController : AWEBaseListSectionController <AWEBaseDetailHeaderSectionControllerOverride>

@property (nonatomic) double sectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:(id)a0;
- (void)setSectionHeightAnimated:(double)a0 completion:(id /* block */)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (Class)cellClass;

@end
