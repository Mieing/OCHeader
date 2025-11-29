@class NSString, NSDictionary, NSData;

@interface IESLiveGameOpenPlatformNetworkRequestParam : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (nonatomic) long long methodType;
@property (copy, nonatomic) NSDictionary *requestQuery;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) double timeout;
@property (nonatomic) long long requestType;
@property (nonatomic) BOOL needCommonParams;

- (void).cxx_destruct;
- (id)init;

@end
