@class NSString, NSNumber;

@interface PTYSpecialRealtimeFeatureOne : NSObject

@property (readonly) NSString *connectionType;
@property (readonly) NSNumber *ramAvailable;
@property (readonly) NSNumber *devicePower;
@property (readonly) NSNumber *screenLight;
@property (readonly) NSNumber *displayTheme;

+ (id)currentConnectionMethodName;
+ (id)realtimekeyMap;
+ (id)sharedInstance;

@end
