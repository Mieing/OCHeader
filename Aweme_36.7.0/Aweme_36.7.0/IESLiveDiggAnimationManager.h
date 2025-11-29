@class NSTimer, HTSLiveInteractiveAPI, UIView, NSMutableArray, NSDate;

@interface IESLiveDiggAnimationManager : NSObject

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (nonatomic) double recordTime;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *nodeArray;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSDate *distantFutureDate;

- (void)checkNodeArray;
- (void)playDiggAnimation:(struct CGPoint { double x0; double x1; })a0 avatarImage:(id)a1 isAnchor:(BOOL)a2;
- (void)playDiggAnimation:(struct CGPoint { double x0; double x1; })a0 avatarImage:(id)a1 iconImage:(id)a2;
- (id)initWithRoom:(id)a0 containerView:(id)a1 type:(unsigned long long)a2;
- (void)addNodeToQueue:(id)a0;
- (void)uploadDoubleClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
