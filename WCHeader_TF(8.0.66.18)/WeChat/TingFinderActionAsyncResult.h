@class NSString, FlutterStandardTypedData;

@interface TingFinderActionAsyncResult : NSObject

@property (nonatomic) long long ret;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) FlutterStandardTypedData *data;

+ (id)makeWithRet:(long long)a0 errorMessage:(id)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
