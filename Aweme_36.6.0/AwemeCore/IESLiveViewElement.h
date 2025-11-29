@class NSString, IESContainerKitCallerInfo, UIView, CALayer;
@protocol IESLiveLayoutContainer;

@interface IESLiveViewElement : NSObject

@property (weak, nonatomic) UIView *rawView;
@property (retain, nonatomic) IESContainerKitCallerInfo *callerInfo;
@property (retain, nonatomic) NSString *innerViewType;
@property (weak, nonatomic) id<IESLiveLayoutContainer> layoutContainer;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) double btd_top;
@property (nonatomic) double btd_bottom;
@property (nonatomic) double btd_width;
@property (nonatomic) double btd_height;
@property (readonly, nonatomic) IESLiveViewElement *parent;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)viewOperationBlock:(id /* block */)a0;
- (id)initWithRawView:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)layoutIfNeeded;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (id)viewType;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)addSubview:(id)a0;
- (void)setViewType:(id)a0;

@end
