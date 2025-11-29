@class RTVInteractiveEmoticonCellModel, UIImageView;
@protocol RTVEmoticonDataManagerInterface, RTVXRControllerInjector;

@interface RTVInteractiveEmoticonCell : RTVInteractionToolBarCell

@property (readonly, nonatomic) RTVInteractiveEmoticonCellModel *cellModel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) id<RTVEmoticonDataManagerInterface> emoticonDataManager;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__configureComponents;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
