@class NSString, IESECWindowPreloadCompoentObject, UIView;
@protocol IESECStoreGoodsTagsContainerProtocol, IESECRelationTagListView;

@interface IESECRelationTagsComponent : UIView <IESECLLComponent, IESECWindowPreloadComponentProtocol> {
    IESECWindowPreloadCompoentObject *preloadObj;
}

@property (retain, nonatomic) UIView<IESECStoreGoodsTagsContainerProtocol> *tagsView;
@property (retain, nonatomic) UIView<IESECRelationTagListView> *productTagsView;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ clickGoodsTagBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 newDashLine:(BOOL)a2;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 tag:(id)a2;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)createPreloadCompoentObjectWihtModel:(id)a0;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 tag:(id)a2 maxWidth:(double)a3;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 maxWidth:(double)a2;
+ (id /* block */)tags;

- (void)updateUIWithModel:(id)a0;
- (void)updateProductTagsViewWithModel:(id)a0 tagModel:(id)a1 trackVisible:(BOOL)a2;
- (void)updateTagsViewWithModel:(id)a0;
- (void)setPreloadObj:(id)a0;
- (id)preloadObj;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
