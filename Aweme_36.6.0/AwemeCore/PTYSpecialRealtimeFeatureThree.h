@class NSNumber;

@interface PTYSpecialRealtimeFeatureThree : NSObject

@property (readonly) float thermalState;
@property (readonly) float processorUsage;
@property (readonly) long long powerConnected;
@property (readonly) long long silentMode;
@property (readonly) long long batterySaver;
@property (readonly) long long audioJack;
@property (readonly) NSNumber *audioLevel;

+ (id)realtimekeyMap;
+ (id)sharedInstance;

@end
