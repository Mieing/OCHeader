@class NSString, FlutterStandardTypedData;

@interface FlutterCgiRequest : NSObject

@property (nonatomic) long long funcId;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) FlutterStandardTypedData *data;
@property (nonatomic) BOOL longPolling;
@property (nonatomic) long long longPollingTimeout;

+ (id)makeWithFuncId:(long long)a0 uri:(id)a1 data:(id)a2 longPolling:(BOOL)a3 longPollingTimeout:(long long)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
