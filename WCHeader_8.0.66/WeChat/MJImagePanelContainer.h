@class UIView, MJImagePanel, NSLayoutConstraint;
@protocol MJImagePanelContainerDelegate;

@interface MJImagePanelContainer : MJPassthroughView

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) UIView *grabBar;
@property (retain, nonatomic) UIView *grabIndicator;
@property (readonly, nonatomic) BOOL isEditingPanel;
@property (readonly, nonatomic) double panelHeight;
@property (readonly, nonatomic) MJImagePanel *panelView;
@property (weak, nonatomic) id<MJImagePanelContainerDelegate> delegate;

- (id)initWithPanelView:(id)a0 avoidSafeArea:(BOOL)a1;
- (void)presentFromView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)processRenderTapWithLayer:(id)a0 events:(unsigned long long)a1;
- (void)_setupGrabBar;
- (void)layoutSubviews;
- (void)handleDragClosePanelAction;
- (void).cxx_destruct;

@end
