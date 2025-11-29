@class NSString, NSDictionary;

@interface ArgusNetworkJSBCallParams : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL addCommonParams;

- (void).cxx_destruct;

@end
