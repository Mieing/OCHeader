@interface IESLiveMetricTrackerData : NSObject

- (id)allRoomTrackerDataWithRoom:(id)a0;
- (id)specificAllRoomTrackerDataWithRoom:(id)a0;
- (id)useOnceTrackerDataWithRoom:(id)a0;
- (id)specificUseOnceRoomTrackerDataWithRoom:(id)a0;
- (id)currentRoomTrackerDataWithRoom:(id)a0;
- (id)specificCurrentRoomTrackerDataWithRoom:(id)a0 isFromEntrance:(BOOL)a1;
- (id)distributionEntranceSpecificTrackerDataWithRoom:(id)a0 event:(id)a1;
- (id)init;

@end
