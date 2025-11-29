@class NSMutableDictionary, NSMutableArray;

@interface AWEStudioCameraTrackerModel : NSObject

@property (nonatomic) double baseTime;
@property (retain, nonatomic) NSMutableDictionary *cameraTypeMap;
@property (retain, nonatomic) NSMutableArray *cameraMessageNodeLists;
@property (retain, nonatomic) NSMutableArray *sendCameraMessageNodeLists;

- (id)getCameraMessageWithKey:(id)a0;
- (void)removeCameraMessageCacheWithKey:(id)a0;
- (void)cacheCameraMessage:(id)a0 withKey:(id)a1;
- (void)recordSendCameraMessage:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;
- (id)initWith:(double)a0;

@end
