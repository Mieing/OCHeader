@class NSArray, CLLocation, NSString;

@interface TrackRoomReporter : NSObject

@property (retain, nonatomic) CLLocation *userEnterLocation;
@property (retain, nonatomic) NSArray *othersEnterLocation;
@property (retain, nonatomic) CLLocation *userCurrentLocation;
@property (retain, nonatomic) NSArray *othersCurrentLocation;
@property (nonatomic) double movePathDistance;
@property (readonly, nonatomic) unsigned int userMoveDistance;
@property (readonly, nonatomic) unsigned int userMovePathDistance;
@property (readonly, nonatomic) unsigned int distanceWithRoomCreater;
@property (readonly, nonatomic) unsigned int enterCount;
@property (readonly, nonatomic) unsigned int leaveCount;
@property (readonly, nonatomic) NSString *allDistanceWhenEnter;
@property (readonly, nonatomic) NSString *allDistanceWhenLeave;

- (void)onUserEnter:(id)a0 otherLocations:(id)a1;
- (void)onUserUpdate:(id)a0 otherLocations:(id)a1;
- (void).cxx_destruct;

@end
