@class LynxUI;

@interface LynxBackgroundCapInsets : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (weak, nonatomic) LynxUI *ui;

- (double)toCapInsetValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)reset;

@end
