@class NSString, UIView, LLDitoNode, LLDitoDecorationView;
@protocol LLDitoComponentView;

@interface LLDitoComponentCell : UICollectionViewCell <LLDitoNodeView> {
    UIView<LLDitoComponentView> *_bizView;
    UIView *_bgView;
    LLDitoDecorationView *_decorationView;
}

@property (retain, nonatomic) UIView *cardView;
@property (weak, nonatomic) LLDitoNode *node;
@property (retain, nonatomic) UIView<LLDitoComponentView> *bizView;
@property (readonly, nonatomic) UIView *bgView;
@property (readonly, nonatomic) LLDitoDecorationView *decorationView;
@property (readonly, nonatomic) LLDitoNode *inheritStyleFromThisNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutCardView;
- (void)fillNode:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;

@end
