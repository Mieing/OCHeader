@class FlutterStandardTypedData;

@interface FLTStatusPlatformProto : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *byteArray;

+ (id)makeWithByteArray:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
