@class NSString;

@interface QLocationMarkerWrapper : NSObject

@property (nonatomic) int markerID;
@property (retain, nonatomic) NSString *markerInstruction;
@property (retain, nonatomic) NSString *compassInstruction;
@property (retain, nonatomic) NSString *directionEastInstruction;
@property (retain, nonatomic) NSString *directionWestInstruction;
@property (retain, nonatomic) NSString *directionNorthInstruction;
@property (retain, nonatomic) NSString *directionSouthInstruction;

- (void).cxx_destruct;

@end
