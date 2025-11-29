@class UIImageView, NSString;

@interface IESGCPCGDebugDraggableView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)_setupDebugLabel;
- (void)_onSelfClicked:(id)a0;
- (void)_onSelfPanned:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)_setupGestures;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
