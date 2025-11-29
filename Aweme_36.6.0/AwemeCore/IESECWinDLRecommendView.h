@class UIView, IESECRelationGoodsCardViewModel, UITapGestureRecognizer, IESECWindowPreloadCompoentObject, NSString, UIImageView, IESECStoreGoodsRecommendInfoView, CAGradientLayer, IESECRelationTagListView, UIColor;

@interface IESECWinDLRecommendView : IESECDLView <IESECWindowPreloadComponentProtocol> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _cornerRadius;
    id /* block */ _clickComponentAction;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECStoreGoodsRecommendInfoView *recommendInfoView;
@property (retain, nonatomic) UIImageView *textIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (nonatomic) double iconHeight;
@property (retain, nonatomic) UIColor *arrowDefaultTintColor;
@property (retain, nonatomic) IESECRelationGoodsCardViewModel *goodsModel;
@property (retain, nonatomic) IESECRelationTagListView *recommendInfoTagListView;
@property (nonatomic) double recommendInfoTagListViewWidth;
@property (retain, nonatomic) UITapGestureRecognizer *recommendViewTapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *dynamicTapGesture;
@property (retain, nonatomic) IESECWindowPreloadCompoentObject *preloadObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPreloadCompoentObjectWihtModel:(id)a0;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void)p_setUpUI;
- (void)didTapRecommendView;
- (void)updateBackgroundColors:(id)a0;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void)resetOriginalEventResponder;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
