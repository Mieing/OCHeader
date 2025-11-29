@class NSMutableDictionary, NSDictionary, NSMutableSet, NSSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BU_AFHTTPRequestSerializer : NSObject <BU_AFURLRequestSerialization, BUADRequestSerializerProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *mutableObservedChangedKeyPaths;
@property (retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestHeaderModificationQueue;
@property (nonatomic) unsigned long long queryStringSerializationStyle;
@property (copy, nonatomic) id /* block */ queryStringSerialization;
@property (nonatomic) unsigned long long stringEncoding;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) BOOL HTTPShouldHandleCookies;
@property (nonatomic) BOOL HTTPShouldUsePipelining;
@property (nonatomic) unsigned long long networkServiceType;
@property (nonatomic) double timeoutInterval;
@property (readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
@property (retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)serializer;

- (id)multipartFormRequestWithMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 constructingBodyWithBlock:(id /* block */)a3 error:(id *)a4;
- (id)requestBySerializingRequest:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (void)setQueryStringSerializationWithStyle:(unsigned long long)a0;
- (void)setQueryStringSerializationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;
- (id)requestWithMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 error:(id *)a3;
- (void)encodeWithCoder:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
