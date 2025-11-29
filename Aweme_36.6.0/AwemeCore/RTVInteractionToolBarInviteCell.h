@class UIImageView, RTVInteractionInviteCellModel;
@protocol RTVXRControllerInjector;

@interface RTVInteractionToolBarInviteCell : RTVInteractionToolBarCell

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVInteractionInviteCellModel *model;
@property (readonly, nonatomic) UIImageView *imageView;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)willBeginDragging;
- (void)__createUIComponents;
- (void)__configCustomIconName:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
