@interface WeChat.ImageLoadStatusReporter : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ memScene;
    void /* unknown type, empty encoding */ memCost;
    void /* unknown type, empty encoding */ diskScene;
    void /* unknown type, empty encoding */ diskCost;
    void /* unknown type, empty encoding */ diskFileCount;
    void /* unknown type, empty encoding */ extraInfo;
    void /* unknown type, empty encoding */ index;
}

- (void)scheduleNextReport;

@end
