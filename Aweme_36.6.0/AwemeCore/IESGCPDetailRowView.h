@class NSArray, NSString;

@interface IESGCPDetailRowView : IESGCPDetailBaseView <IESGCPDetailRowButtonAnimateProtocol>

@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)setContainerViewAlpha:(double)a0;
- (void)swapTwoActionButtonWidth:(id /* block */)a0 completion:(id /* block */)a1 animationDuration:(double)a2;
- (void)layoutItems:(id)a0 isAdd:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupSubviews;

@end
