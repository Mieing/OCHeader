@class AVAudioSession;

@interface FlowKit.FlowSystemVolumnManager : NSObject {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableGeneralTrack;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ generalWorkItem;
    void /* unknown type, empty encoding */ generalWorkExtraParams;
    void /* unknown type, empty encoding */ generalVolumeBefore;
    void /* unknown type, empty encoding */ generalVolumeAfter;
    void /* unknown type, empty encoding */ hasTriggered0Volume;
    void /* unknown type, empty encoding */ lastTrackFirstPlayID;
    void /* unknown type, empty encoding */ hasFirstAdjustmentInTrack;
    void /* unknown type, empty encoding */ trackingQueue;
}

@property (nonatomic, readonly) AVAudioSession *session;

- (void).cxx_destruct;
- (id)init;

@end
