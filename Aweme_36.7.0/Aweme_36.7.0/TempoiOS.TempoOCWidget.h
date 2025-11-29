@interface TempoiOS.TempoOCWidget : TempoiOS.TempoWidget {
    void /* unknown type, empty encoding */ entity;
}

- (BOOL)ocRegisterAttributeWithName:(id)a0 method:(id /* block */)a1;
- (BOOL)ocRegisterStyleWithName:(id)a0 method:(id /* block */)a1;
- (BOOL)ocRegisterEventWithName:(id)a0 method:(id /* block */)a1;
- (void)ocDispatchEventWithName:(id)a0 view:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
