@class FlutterStandardTypedData;

@interface LiveHybridOpenNativeProfile : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *contactPBData;
@property (retain, nonatomic) FlutterStandardTypedData *feedPBData;

+ (id)makeWithContactPBData:(id)a0 feedPBData:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
