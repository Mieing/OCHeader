@class NSString, NSDictionary;
@protocol AMapComponent;

@interface MANetReqOptions : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL enableHTTPS;
@property (copy, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) NSString *v6BaseUrl;
@property (retain, nonatomic) NSDictionary *queryParam;
@property (nonatomic) long long timeout;
@property (nonatomic) unsigned long long method;
@property (retain, nonatomic) NSDictionary *HTTPHeaders;
@property (retain, nonatomic) id postRequestParam;
@property (nonatomic) long long postDataFormat;
@property (retain, nonatomic) Class responseClass;
@property (nonatomic) BOOL returnResponseAsRaw;
@property (retain, nonatomic) id<AMapComponent> componentInfo;
@property (nonatomic) BOOL enableDebugLog;
@property (copy, nonatomic) id /* block */ postDataHook;
@property (copy, nonatomic) id /* block */ resultHook;
@property (retain, nonatomic) id userData;

- (id)generatePostData;
- (id)generateHttpHeaders;
- (id)generateURL;
- (id)generateV6URL;
- (id)generateFinalQueryStringWith:(id)a0;
- (id)urlEncodedQueryStringFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
