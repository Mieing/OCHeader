@class FlutterStandardTypedData;

@interface FlutterCgiResponse : NSObject

@property (nonatomic) long long errorType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) FlutterStandardTypedData *data;

+ (id)makeWithErrorType:(long long)a0 errorCode:(long long)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
