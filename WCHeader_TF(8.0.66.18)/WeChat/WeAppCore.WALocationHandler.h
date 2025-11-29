@interface WeAppCore.WALocationHandler : NSObject <TencentLBSLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationMgr;
    void /* unknown type, empty encoding */ watchHandlers;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void)dealloc;
- (void)tencentLBSLocationManager:(id)a0 didUpdateLocation:(id)a1;
- (void).cxx_destruct;

@end
