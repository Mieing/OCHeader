@interface AWELiveSwiftImpl.AWELiveGuideDispatchShowUtilModel : NSObject {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ handlerMarked;
    void /* unknown type, empty encoding */ referString;
}

+ (double)liveEnterRoomButtonDelaySeconds;
+ (BOOL)hitABTestWithReferString:(id)a0;
+ (BOOL)limitReferString:(id)a0;

- (void)setupDispatchHandlerWithPreShowReadyHandler:(id /* block */)a0 showHandler:(id /* block */)a1 afterShowExecuteHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
