@class IESECGoodsDetailHeaderServiceProvider, IESECGoodsDetailVideoContainer, UIImageView, IESECGoodsDetailHeaderContentModel, CALayer, CAReplicatorLayer, UIView;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderContentService;

@interface IESECoodsDetailHeaderContentBaseCell : UIView

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContentService> content;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESECGoodsDetailVideoContainer *videoPlayerContainerView;
@property (retain, nonatomic) UIImageView *extendsView;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CAReplicatorLayer *extendsLayer;
@property (retain, nonatomic) UIView *barView;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentModel *model;
@property (nonatomic) BOOL contentScrollOff;
@property (nonatomic) double contentScrollOffset;

- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)configBarView;
- (void)layoutBarView;
- (void)extentHeadViewWithImage:(id)a0;
- (void)configAccessibilityLabel;
- (void)headerContentScrollOffsetChanged;
- (BOOL)isDwarfHeaderState;
- (void)updateContentFrame;
- (double)calculateCellFullHeight;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
