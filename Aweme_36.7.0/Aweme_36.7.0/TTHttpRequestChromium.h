@class NSData, NSString, NSArray, TTHttpMultipartFormDataChromium, NSMutableDictionary, NSDictionary, NSMutableArray, TTCaseInsenstiveDictionary;

@interface TTHttpRequestChromium : TTHttpRequest <NSCopying> {
    unsigned long long _retryTimes;
    unsigned long long _retryHostPathCount;
    NSString *_lastRetryUrl;
}

@property BOOL enableCaseInsensitiveHeader;
@property (copy) NSString *method;
@property (copy) NSData *body;
@property (retain) NSMutableDictionary *allHTTPHeaders;
@property (retain) TTCaseInsenstiveDictionary *caseInsensitiveAllHTTPHeaders;
@property double timeout;
@property (copy, nonatomic) NSArray *retryHostList;
@property (copy, nonatomic) NSArray *retryPathList;
@property (retain) TTHttpMultipartFormDataChromium *form;
@property (copy) NSString *urlString;
@property (retain) NSDictionary *params;
@property long long requestQueryPriority;
@property BOOL pureRequest;
@property (retain, nonatomic) NSMutableArray *redirectRetryObjects;

- (unsigned long long)retryTimes;
- (void)setRetryTimes:(unsigned long long)a0;
- (id)initWithURL:(id)a0 method:(id)a1 multipartForm:(id)a2;
- (void)setRetryHostPathCount:(unsigned long long)a0;
- (void)setLastRetryUrl:(id)a0;
- (void)validateHTTPHeaders;
- (unsigned long long)retryHostPathCount;
- (void)setHTTPBodyNoCopy:(id)a0;
- (id)ignoreCaseValueForHTTPHeaderField:(id)a0;
- (void)setWebviewInfoProperty:(id)a0;
- (id)getHostPathAccordingToRetryTimes:(unsigned long long)a0;
- (void)replaceWithHost:(id)a0 path:(id)a1;
- (void)setRetryTimesProperty:(unsigned long long)a0;
- (void)setLastRetryUrlProperty:(id)a0;
- (void)setRetryHosts:(id)a0 paths:(id)a1;
- (void)markIfNeedCustomizedRetry:(BOOL)a0;
- (id)lastRetryUrl;
- (id)HTTPBody;
- (void).cxx_destruct;
- (void)setHTTPBody:(id)a0;
- (double)timeoutInterval;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)URL;
- (void)setURL:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (void)setTimeoutInterval:(double)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allHTTPHeaderFields;
- (void)setAllHTTPHeaderFields:(id)a0;
- (void)addValue:(id)a0 forHTTPHeaderField:(id)a1;

@end
