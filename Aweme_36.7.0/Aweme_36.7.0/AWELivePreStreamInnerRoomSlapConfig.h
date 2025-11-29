@interface AWELivePreStreamInnerRoomSlapConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ displayManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ actionBlock;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ isShowing;
}

- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (void)onUserEnterLiveRoom;
- (void)handleMessage:(id)a0 actionBlock:(id /* block */)a1;
- (id)enterRoomParams;
- (id)enterClickRoomParams;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
