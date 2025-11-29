@class NSString, IESECShopTagListView, UIView;
@protocol IESECShopGoodsTagsContainerProtocol;

@interface IESECShopGoodsTagsComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIView<IESECShopGoodsTagsContainerProtocol> *tagsView;
@property (retain, nonatomic) IESECShopTagListView *productTagsView;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) id /* block */ clickGoodsTagBlock;

+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 newDashLine:(BOOL)a2;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 tag:(id)a2;
+ (id /* block */)tagsWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void)updateUIWithModel:(id)a0;
- (void)updateProductTagsViewWithModel:(id)a0 tagModel:(id)a1 trackVisible:(BOOL)a2;
- (void)updateTagsViewWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
