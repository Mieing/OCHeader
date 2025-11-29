@interface SalamanderAnnieX.CardView : NSObject {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ realView;
}

- (id)initWithUrl:(id)a0 initialData:(id)a1 params:(id)a2;
- (void)updateStateWithData:(id)a0;
- (void)subscribeEventWithName:(id)a0 callback:(id)a1;
- (void)unsubscribeEventWithName:(id)a0 callback:(id)a1;
- (id)getUIView;
- (void).cxx_destruct;
- (id)init;

@end
