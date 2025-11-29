@interface MMNoRetainTimerTarget : NSObject

@property (nonatomic) SEL targetAction;
@property (weak, nonatomic) id target;

- (id)initWithTarget:(id)a0 withAction:(SEL)a1;
- (void)onNoRetainTimer:(id)a0;
- (void).cxx_destruct;

@end
