@class UIView, NSString, IESECTrendGoodsVideoCardGoodsDetailView, UITapGestureRecognizer, UIImageView, IESECGoodsFeedGradientView, IESECTrendGoodsVideoCardPlayTimeView, IESECTrendGoodsVideoCardAuthorTitleView, UILabel;
@protocol IESECTrendGoodsVideoCardDelegate, IESECTrendGoodsVideoCardModelProtocol;

@interface IESECTrendGoodsVideoCell : UICollectionViewCell <IESECTrendGoodsCardProtocol> {
    id<IESECTrendGoodsVideoCardModelProtocol> _videoModel;
}

@property (retain, nonatomic) IESECTrendGoodsVideoCardPlayTimeView *videoPlayTimeView;
@property (retain, nonatomic) IESECTrendGoodsVideoCardAuthorTitleView *authorView;
@property (retain, nonatomic) UIImageView *goodsImage;
@property (retain, nonatomic) IESECGoodsFeedGradientView *backGradientView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) IESECTrendGoodsVideoCardGoodsDetailView *goodsDetailView;
@property (retain, nonatomic) UILabel *expertTextLabel;
@property (retain, nonatomic) UITapGestureRecognizer *maskViewTapGesture;
@property (retain, nonatomic) UIImageView *coverImage;
@property (weak, nonatomic) id<IESECTrendGoodsVideoCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentLineSpaceFromFont:(id)a0;
+ (double)getHeightWithModel:(id)a0 containerWidth:(double)a1 params:(id)a2;

- (void)tapAuthorTitleViewGestureHandler:(id)a0;
- (void)tapBottomViewGestureHandler:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)tapGestureHandler:(id)a0;

@end
