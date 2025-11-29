@interface AWEClassroomImpl.ClassroomMoreAlert : NSObject <AWEAlertProtocol> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ onClose;
    void /* unknown type, empty encoding */ alertDialog;
    void /* unknown type, empty encoding */ dialogAction;
}

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
