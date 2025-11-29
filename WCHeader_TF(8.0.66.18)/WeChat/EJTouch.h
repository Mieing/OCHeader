@class UIView;

@interface EJTouch : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } locationInView;
@property (nonatomic) struct CGPoint { double x; double y; } locationInScriptView;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) double force;
@property (nonatomic) double maximumPossibleForce;
@property (weak, nonatomic) UIView *view;

- (id)initWithExtTouch:(id)a0 scriptView:(id)a1;
- (void).cxx_destruct;

@end
