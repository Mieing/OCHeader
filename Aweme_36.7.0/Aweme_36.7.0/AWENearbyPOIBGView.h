@class AWEDCardView, UIView, NSArray, UITapGestureRecognizer, AWENearbyPOIDanmakuView, UIImageView, UIScrollView, NSString, AWENearbyImgAutoScrollView, UIColor;
@protocol AWENearbyPOIInfoCardModel, AWENearbyPOIInfoCardMessage;

@interface AWENearbyPOIBGView : UIView <AWEDCardLynxViewContainerProtocol, AWENearbyPOIBGViewProtocol>

@property (retain, nonatomic) id<AWENearbyPOIInfoCardModel> cardModel;
@property (retain, nonatomic) UIImageView *adaptedBGImgView;
@property (copy, nonatomic) NSArray *headerImageModelList;
@property (retain, nonatomic) UIColor *maskBGColor;
@property (nonatomic) BOOL headerSetupOnce;
@property (retain, nonatomic) AWENearbyPOIDanmakuView *danmakuView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UITapGestureRecognizer *headImgGesture;
@property (retain, nonatomic) AWEDCardView *lynxBgView;
@property (weak, nonatomic) id<AWENearbyPOIInfoCardMessage> routeDelegate;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) UIScrollView *outScrollview;
@property (retain, nonatomic) AWENearbyImgAutoScrollView *imageScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgViewWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)configViewsWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)showDetailWithMethod:(id)a0 bulletType:(id)a1;
- (void)configBGViewWithModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)getAutoScrollPlayImagesWithCardModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)createHeadImgViewModelWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 showLoading:(BOOL)a2 webImgeLoadCompleted:(id /* block */)a3;
- (void)addMaskLayerWithUIView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)gradientLayerWithMasking:(id)a0;
- (id)lynxScene;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
