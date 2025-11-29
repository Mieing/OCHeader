@class NSString, NSMutableArray, NSObject;
@protocol HARMotionDataProvider, OS_dispatch_queue, HARSensorDataControllerDelegate;

@interface HARSensorDataController : NSObject <HARSensorDataController> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) id<HARMotionDataProvider> motionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sensorOperateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sensorDataQueue;
@property (retain, nonatomic) NSMutableArray *sensorDatas;
@property (retain, nonatomic) NSMutableArray *accelerometerDataArray;
@property (retain, nonatomic) NSMutableArray *gyroscopeDataArray;
@property (retain, nonatomic) NSMutableArray *magnetometerDataArray;
@property (nonatomic) BOOL addingData;
@property (nonatomic) BOOL useScreenStatus;
@property (nonatomic) BOOL enableCollectSensorData;
@property (weak, nonatomic) id<HARSensorDataControllerDelegate> delegate;
@property (nonatomic) BOOL enableMagnetometerSensor;
@property (nonatomic) BOOL shouldRemoveDispatchSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopSensorDataUpdates;
- (void)p_addOneSensorData:(id)a0 toRecordArray:(id)a1;
- (void)asyncGatherSensorDataWithMotionManager:(id)a0;
- (void)clearSensorData;
- (void)startSensorDataUpdates;
- (void)asyncGatherSensorData;
- (void)setupWithMotionDataProvider:(id)a0;
- (id)getLastSensorValueWithDataType:(unsigned long long)a0 range:(long long)a1;
- (id)getSensorData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
