@class NSString, NSDictionary, IESECHTTPResponse;
@protocol IESECHTTPRequestTask;

@interface IESECHTTPRequest : NSObject {
    NSString *_rawAbsoluteURLString;
}

@property (readonly, nonatomic) NSString *rawAbsoluteURLString;
@property (copy, nonatomic) NSString *absoluteURLString;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long method;
@property (readonly, nonatomic) NSString *methodString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *additionalURLQueryString;
@property (nonatomic) BOOL useJSONBodyWhenPost;
@property (nonatomic) BOOL allowEmptyBodyResponse;
@property (nonatomic) BOOL bypassInterceptor;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL callbackInBackgroundThread;
@property (nonatomic) BOOL transformModelInBackgroundThread;
@property (retain, nonatomic) id<IESECHTTPRequestTask> requestTask;
@property (retain, nonatomic) IESECHTTPResponse *response;
@property (readonly, nonatomic) NSString *requestDescription;
@property (copy, nonatomic) id /* block */ metricsBlock;

- (void).cxx_destruct;
- (id)init;

@end
