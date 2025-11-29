@protocol AWEStudioEditMusicApplyAPI, AWEStudioEditMusicVolumeAPI, AWEStudioEditMusicCapsuleAPI;

@interface AWEStudioEditImpl.EditMusicFeaturePublicAPI : NSObject <AWEStudioEditMusicFeaturePublicAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_capsule;
    void /* unknown type, empty encoding */ $__lazy_storage_$_apply;
    void /* unknown type, empty encoding */ $__lazy_storage_$_volume;
}

@property (nonatomic, retain) id<AWEStudioEditMusicCapsuleAPI> capsule;
@property (nonatomic, retain) id<AWEStudioEditMusicApplyAPI> apply;
@property (nonatomic, retain) id<AWEStudioEditMusicVolumeAPI> volume;

- (void).cxx_destruct;
- (id)init;

@end
