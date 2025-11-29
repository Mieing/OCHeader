@class IESContainerKitCallerInfo;
@protocol IESLiveLayoutContainer;

@interface IESLiveContainerElement : NSObject

@property (weak, nonatomic) id<IESLiveLayoutContainer> container;
@property (retain, nonatomic) IESContainerKitCallerInfo *callerInfo;
@property (weak, nonatomic) id<IESLiveLayoutContainer> layoutContainer;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double btd_top;
@property (nonatomic) double btd_bottom;
@property (nonatomic) double btd_width;
@property (nonatomic) double btd_height;

- (void)containerOperationBlock:(id /* block */)a0;
- (id)initWithLayoutContainer:(id)a0;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (id)containerView;

@end
