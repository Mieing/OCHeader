@class IESGCPDetailCommentDoubleButtonContainerView, IESGCPDetailUniversalButtonContainerView;

@interface IESGCPDetailCommentButtonV4View : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailUniversalButtonContainerView *commentButton;
@property (retain, nonatomic) IESGCPDetailCommentDoubleButtonContainerView *commentDoubleButton;

- (void)bindViewModel:(id)a0;
- (void)makeViewTrackNode;
- (void)makeViewTrackNodeWithView:(id)a0;
- (void)updateViewStyle;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
