@class UIView;

@interface IESECLiveLayoutProxyView : IESECEventForwardingView {
    UIView *_attachedView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) BOOL existAttachedView;
@property (nonatomic) BOOL useFrameConstraints;
@property (nonatomic) BOOL useAttachedViewSizeConstraints;

- (id)deAttach;
- (void).cxx_destruct;
- (void)attach:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
