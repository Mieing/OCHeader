@class UIView;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderContentService;

@interface IESECoodsDetailHeaderContentSliceCell : IESECoodsDetailHeaderContentBaseCell

@property (retain, nonatomic) UIView *sliceView;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContentService> content;

- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)headerContentScrollOffsetChanged;
- (void)updateSliceViewFrame;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
