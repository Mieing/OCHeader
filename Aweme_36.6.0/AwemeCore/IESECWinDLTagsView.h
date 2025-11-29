@class IESECRelationGoodsCardViewModel, IESECRelationTagListView, UIView, UITapGestureRecognizer;
@protocol IESECStoreGoodsTagsContainerProtocol;

@interface IESECWinDLTagsView : IESECDLView

@property (retain, nonatomic) UIView<IESECStoreGoodsTagsContainerProtocol> *tagsView;
@property (retain, nonatomic) IESECRelationTagListView *productTagsView;
@property (retain, nonatomic) IESECRelationGoodsCardViewModel *goodsVM;
@property (retain, nonatomic) UITapGestureRecognizer *dynamicTapGesture;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void)resetOriginalEventResponder;
- (void)setTagViewClickBlock;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
