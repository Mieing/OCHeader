@class NSString, NSDictionary;

@interface BDXBridgeRequestParam : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class responseSerializer;
@property (nonatomic) BOOL callbackOnBackgroundThread;
@property (nonatomic) BOOL isCustomizedCookie;

- (void).cxx_destruct;
- (id)description;

@end
