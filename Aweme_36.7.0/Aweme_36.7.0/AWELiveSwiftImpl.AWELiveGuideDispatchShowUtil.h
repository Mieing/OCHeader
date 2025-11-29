@class NSString;

@interface AWELiveSwiftImpl.AWELiveGuideDispatchShowUtil : NSObject {
    void /* function */ referString;
    void /* unknown type, empty encoding */ showElementModel;
    void /* unknown type, empty encoding */ autoTimerModel;
    void /* unknown type, empty encoding */ pitayaModel;
    void /* unknown type, empty encoding */ modelMap;
}

@property (nonatomic, copy) NSString *referString;

- (void)enterRoom;
- (void)setupShowElementDispatchHandlerWithPreShowReadyHandler:(id /* block */)a0 showHandler:(id /* block */)a1;
- (void)setupAutoTimerDispatchHandlerWithHandler:(id /* block */)a0;
- (void)setupPitayaModelDispatchHandlerWithHandler:(id /* block */)a0;
- (void)startShowElementDispatchHandler;
- (BOOL)hitABTest;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
