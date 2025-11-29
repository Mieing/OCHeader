@class CAGradientLayer, NSString, IESLiveHonorWallElement, UIView, IESLiveUserCardStore;

@interface IESLiveUserCardHonorItemView : UIView <IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) IESLiveHonorWallElement *element;
@property (retain, nonatomic) UIView *subView;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView *upContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBackgroundImage;
- (void)setupBackgroundColor;
- (void)updateLayRadius:(double)a0;
- (id)registerSubView;
- (id)initWithElement:(id)a0 withUsercardStore:(id)a1 withSubView:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
