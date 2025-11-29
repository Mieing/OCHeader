@class NSString, NSData, NSDictionary;

@interface UnisusNetworkRequestParams : NSObject

@property (nonatomic) int method_type;
@property (nonatomic) int engine_type;
@property (retain, nonatomic) NSString *from_type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSData *request_body;
@property (nonatomic) BOOL enable_cache;
@property (nonatomic) long long options;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSDictionary *queries;
@property (nonatomic) int tag_type;

- (void).cxx_destruct;
- (id)init;

@end
