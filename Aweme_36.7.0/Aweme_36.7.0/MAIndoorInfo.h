@class NSString, NSArray;

@interface MAIndoorInfo : NSObject

@property (retain, nonatomic) NSString *cnName;
@property (retain, nonatomic) NSString *enName;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *buildingType;
@property (nonatomic) int activeFloorIndex;
@property (nonatomic) int activeFloorInfoIndex;
@property (retain, nonatomic) NSArray *floorInfo;
@property (nonatomic) int numberOfFloor;
@property (nonatomic) int numberOfParkFloor;

- (void).cxx_destruct;
- (id)init;

@end
