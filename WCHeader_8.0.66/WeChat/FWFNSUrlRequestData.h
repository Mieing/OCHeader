@class NSString, FlutterStandardTypedData, NSDictionary;

@interface FWFNSUrlRequestData : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *httpMethod;
@property (retain, nonatomic) FlutterStandardTypedData *httpBody;
@property (copy, nonatomic) NSDictionary *allHttpHeaderFields;

+ (id)makeWithUrl:(id)a0 httpMethod:(id)a1 httpBody:(id)a2 allHttpHeaderFields:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
