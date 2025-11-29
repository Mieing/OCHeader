@class RTVEffectGameDownloadTask, UILabel, UIView;
@protocol RTVColorAdaptorInterface, RTVXRControllerInjector;

@interface RTVEffectGameContentProgressView : UIView

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVColorAdaptorInterface> colorAdapter;
@property (readonly, nonatomic) RTVEffectGameDownloadTask *task;
@property (readonly, nonatomic) UIView *translucentView;
@property (readonly, nonatomic) UIView *progressIndicatorView;
@property (readonly, nonatomic) UILabel *progressLabel;

- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__observeProgress;
- (void)__updateUIWithProgress:(float)a0;
- (void).cxx_destruct;

@end
