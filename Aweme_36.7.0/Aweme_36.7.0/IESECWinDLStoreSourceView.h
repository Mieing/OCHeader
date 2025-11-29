@class NSString, IESECWindowPreloadCompoentObject, IESECWinGoodsSourceView, UITapGestureRecognizer;

@interface IESECWinDLStoreSourceView : IESECDLView <IESECWindowPreloadComponentProtocol>

@property (retain, nonatomic) IESECWinGoodsSourceView *goodsSourceView;
@property (retain, nonatomic) UITapGestureRecognizer *goodsSourceViewTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *dynamicTapGesture;
@property (copy, nonatomic) id /* block */ clickGoodsSourceBlock;
@property (retain, nonatomic) IESECWindowPreloadCompoentObject *preloadObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPreloadCompoentObjectWihtModel:(id)a0;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void)resetOriginalEventResponder;
- (void)didTapGoodsSourceView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
