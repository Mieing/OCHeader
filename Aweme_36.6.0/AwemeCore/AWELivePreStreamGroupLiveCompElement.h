@interface AWELivePreStreamGroupLiveCompElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber> {
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ lynxURL;
    void /* unknown type, empty encoding */ roomID;
    void /* unknown type, empty encoding */ anchorID;
}

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)reset;

@end
