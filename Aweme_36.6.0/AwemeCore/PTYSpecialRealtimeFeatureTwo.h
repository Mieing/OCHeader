@class NSArray;

@interface PTYSpecialRealtimeFeatureTwo : NSObject

@property (readonly) NSArray *motionVector;
@property (readonly) NSArray *gyroData;
@property (readonly) NSArray *compassData;

+ (id)realtimekeyMap;
+ (id)sharedInstance;

@end
