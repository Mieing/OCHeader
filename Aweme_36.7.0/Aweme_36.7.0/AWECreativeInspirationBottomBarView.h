@class AWEAwemeModel, UIView, AWEGradientView, UIButton;
@protocol AWECreativeInspirationServiceProtocol;

@interface AWECreativeInspirationBottomBarView : UIView <AWECreativeInspirationBottomBarViewInterface>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIButton *collectButton;
@property (retain, nonatomic) UIButton *duetButton;
@property (retain, nonatomic) UIButton *friendLoraButton;
@property (retain, nonatomic) id<AWECreativeInspirationServiceProtocol> actionService;

- (void)updateWithAweme:(id)a0;
- (BOOL)isEnableInspirationTabAllMaterialsSupportCollectionStatus;
- (void)addObserverAIGCLoraInfo;
- (void)collectButtonClicked:(id)a0;
- (void)p_updateNewStyleFavoriteBtnState:(BOOL)a0;
- (void)updateFlowShootIcon:(id)a0 text:(id)a1;
- (void)duetButtonClicked:(id)a0;
- (void)updateButtonsLayout:(BOOL)a0;
- (void)collectButtonNewClicked:(id)a0;
- (void)collectPhotoTemplateClicked;
- (void)collectVideoTemplateClicked;
- (void)collectStickerClicked;
- (void)trackFavouriteVideoTemplateIsCollectionStatus:(BOOL)a0;
- (void)trackFavouritePhotoTemplateIsCollectionStatus:(BOOL)a0;
- (void)trackEffectFavouritePropIsCollectionStatus:(BOOL)a0;
- (void)friendLoraButtonClicked;
- (void)updateBackgroundViewColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
