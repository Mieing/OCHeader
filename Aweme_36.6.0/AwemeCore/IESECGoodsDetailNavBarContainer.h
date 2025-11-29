@class IESECGoodsCommentHeader, NSString, UIView;
@protocol IESECPDPNavBarContainerDelegate, IESECGoodsCommentHeaderActionDelegate;

@interface IESECGoodsDetailNavBarContainer : UIView <IESECGoodsCommentHeaderActionDelegate>

@property (retain, nonatomic) UIView *pdpSlcView;
@property (retain, nonatomic) IESECGoodsCommentHeader *commentHeader;
@property (nonatomic) double pdpNavHeight;
@property (nonatomic) double commentNavHeight;
@property (weak, nonatomic) id<IESECPDPNavBarContainerDelegate, IESECGoodsCommentHeaderActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupHeader;
- (double)alphaOfPointFromLayer:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isShowingCommentHeader;
- (void)setupCommentHeader;
- (double)alphaOfPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)rebindHeader;
- (void)showHeader:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
