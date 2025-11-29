@class IESECTrendGoodsProductObject, NSString, IESECLLView, UIView, IESECTrendGoodsRecommendItemModel, UILongPressGestureRecognizer;
@protocol IESECTrendGoodsProductCardDelegate;

@interface IESECTrendGoodsProductCell : UICollectionViewCell <IESECRelationGoodsCardViewModelDelegate, IESECTrendGoodsCardProtocol> {
    IESECTrendGoodsRecommendItemModel *_model;
    IESECTrendGoodsProductObject *_object;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) UIView *feedbackMaskingView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<IESECTrendGoodsProductCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)cellBuilderWithObject:(id)a0;
+ (double)getHeightWithModel:(id)a0 containerWidth:(double)a1 params:(id)a2;

- (void)tapGestureAction:(id)a0;
- (void)longPressGestureAction:(id)a0;
- (void)tapMask;
- (void)bindObject:(id)a0;
- (void)updateDislikeMask;
- (void)dislikeDidClicked:(id)a0;
- (void)clickGoodsSourceView;
- (void)clearDislikeMask;
- (void)showDislikeMask;
- (void)configureWithFeedbackModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
