@interface FlowMedia.FlowVolumeManager : NSObject {
    void /* unknown type, empty encoding */ volumeView;
    void /* unknown type, empty encoding */ slider;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ throttler;
    void /* unknown type, empty encoding */ systemVolume;
}

- (void)systemVolumeDidChangeWithNotification:(id)a0;
- (void)outputVolumeDidChangeWithNotification:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundWithNotification:(id)a0;
- (id)init;

@end
