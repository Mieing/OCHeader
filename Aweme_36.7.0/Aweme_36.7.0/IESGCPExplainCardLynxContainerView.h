@class NSString;
@protocol IESGCPExplainCardLynxContainerViewDelegate, IESGCPLynxCardViewProtocol;

@interface IESGCPExplainCardLynxContainerView : UIView <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESGCPLynxCardViewProtocol> lynxCardView;
@property (nonatomic) struct CGSize { double width; double height; } hybridViewContentSize;
@property (weak, nonatomic) id<IESGCPExplainCardLynxContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFirstScreen;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)initialDataWithCardModel:(id)a0;
- (void)remakeHybridViewConstraintWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)checkCurrentHybridCardSuperview;
- (void)loadWithCardModel:(id)a0;
- (void)removeContextView;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (struct CGSize { double x0; double x1; })containerSize;
- (struct CGSize { double x0; double x1; })cardSize;

@end
