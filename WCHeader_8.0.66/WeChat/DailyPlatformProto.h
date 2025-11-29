@class FlutterStandardTypedData;

@interface DailyPlatformProto : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *bytes;

+ (id)makeWithBytes:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
