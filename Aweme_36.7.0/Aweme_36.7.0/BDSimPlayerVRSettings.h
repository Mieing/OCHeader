@class NSString, NSNumber, NSDictionary;

@interface BDSimPlayerVRSettings : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *zoomValue;
@property (retain, nonatomic) NSNumber *headTracking;
@property (nonatomic) long long scopicType;
@property (retain, nonatomic) NSNumber *rotationPitch;
@property (retain, nonatomic) NSNumber *rotationYaw;
@property (retain, nonatomic) NSNumber *rotationRoll;
@property (retain, nonatomic) NSDictionary *optionDict;
@property (nonatomic) int projectionModelType;

- (void).cxx_destruct;

@end
