@class FlutterStandardTypedData;

@interface TingWecoinSubscribeResult : NSObject

@property (nonatomic) long long status;
@property (retain, nonatomic) FlutterStandardTypedData *scheme;
@property (retain, nonatomic) FlutterStandardTypedData *succHalfPanel;

+ (id)makeWithStatus:(long long)a0 scheme:(id)a1 succHalfPanel:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
