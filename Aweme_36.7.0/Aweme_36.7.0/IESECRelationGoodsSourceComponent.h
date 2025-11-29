@class IESECWindowPreloadCompoentObject, NSString, IESECWinGoodsSourceView;

@interface IESECRelationGoodsSourceComponent : UIView <IESECWindowPreloadComponentProtocol, IESECLLComponent>

@property (retain, nonatomic) IESECWinGoodsSourceView *goodsSourceView;
@property (copy, nonatomic) id /* block */ clickGoodsSourceBlock;
@property (retain, nonatomic) IESECWindowPreloadCompoentObject *preloadObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)goodsSource;
+ (id /* block */)goodsSourceWithHeight:(double)a0 sourceLabelColor:(id)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (id)createPreloadCompoentObjectWihtModel:(id)a0;

- (void)updateUIWithModel:(id)a0;
- (void)didTapGoodsSourceView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
