@class IESECCommentLynxManager, IESECCommentPageContext, IESECCommentSectionViewModel, NSString, IESECGoodsCommentContext, IESECCommentSliceManager;

@interface IESECCommentBFFSectionController : IGListBindingSectionController <IGListBindingSectionControllerDataSource>

@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (weak, nonatomic) IESECCommentPageContext *pageContext;
@property (retain, nonatomic) IESECCommentSectionViewModel *sectionViewModel;
@property (retain, nonatomic) IESECCommentSliceManager *sliceManager;
@property (retain, nonatomic) IESECCommentLynxManager *lynxManager;
@property (copy, nonatomic) id /* block */ invalidateLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionController:(id)a0 viewModelsForObject:(id)a1;
- (id)sectionController:(id)a0 cellForViewModel:(id)a1 atIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })sectionController:(id)a0 sizeForViewModel:(id)a1 atIndex:(long long)a2;
- (void)invalidateLayoutWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
