@interface LynxLayoutTick : NSObject {
    id /* block */ _block;
    BOOL _enableLayout;
}

- (void)triggerLayout;
- (void)cancelLayoutRequest;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)requestLayout;

@end
