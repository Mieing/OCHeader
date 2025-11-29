@class NSString, RTVInvitePlaceholderViewContext, UIImageView, UIView;

@interface RTVInvitePlaceholderView : RTVBasePreviewView <RTVXRControllerInterface>

@property (readonly, nonatomic) RTVInvitePlaceholderViewContext *context;
@property (retain, nonatomic) UIView *horizontalLineView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImageView *plusCenterImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__configureCornerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
