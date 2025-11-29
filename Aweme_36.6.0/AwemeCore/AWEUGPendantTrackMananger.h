@class NSString, NSMutableSet;

@interface AWEUGPendantTrackMananger : NSObject

@property (retain, nonatomic) NSString *lastTrackedMaterialID;
@property (retain, nonatomic) NSMutableSet *trackedControlledPendantIDSet;
@property (nonatomic) BOOL didTrackShow;

+ (id)sharedInstance;

- (BOOL)checkIfNeedTrackMaterialID:(id)a0;
- (void)recordTrackedMaterialID:(id)a0;
- (BOOL)hasTrackControlledThisColdLaunch:(id)a0;
- (void)recordTrackControlledThisColdLaunch:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
