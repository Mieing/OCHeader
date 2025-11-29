@class NSString, BDPUniqueID;

@interface BDPKryptonMergedMediaRecorderServiceImpl : NSObject <KryptonMediaRecorderService, KryptonDefaultMediaRecorderDelegate> {
    BDPUniqueID *_uniqueID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getVideoPathInfo:(id)a0 isClip:(BOOL)a1;
- (id)getVideoDirectory:(id)a0 isClip:(BOOL)a1;
- (long long)getVideoFileManagementPolicy;
- (id)createMediaRecorder;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
