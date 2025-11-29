@interface AWELivePreStreamInnerRoomInteractLinkConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ displayManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ actionBlock;
    void /* unknown type, empty encoding */ guidePointConfig;
    void /* unknown type, empty encoding */ displayElementConfig;
    void /* unknown type, empty encoding */ isShowing;
}

- (void)fetchData;
- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (void)onUserEnterLiveRoom;
- (void)startCountDownTimerIfNeeded:(id /* block */)a0;
- (void)showElement;
- (void)hideElement;
- (void)guideViewClicked;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
