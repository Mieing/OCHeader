@class NSMutableDictionary, NSString, NSURL, APIResponse, TencentOAuth;
@protocol TCAPIRequestDelegate;

@interface TCAPIRequest : NSMutableDictionary <APIBaseCallback> {
    int _state;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) id requestKey;
@property (nonatomic) TencentOAuth *tencentOAuth;
@property (nonatomic) id<TCAPIRequestDelegate> callback;
@property (readonly, nonatomic) NSURL *apiURL;
@property (readonly, nonatomic) NSString *method;
@property (retain, nonatomic) id paramUserData;
@property (readonly, nonatomic) APIResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)APIPath;
+ (id)APIBaseURL;
+ (void)initialize;
+ (id)APIMethod;

- (void)apiBase:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)apiBase:(id)a0 didWriteData:(long long)a1 totalBytesWritten:(long long)a2 expectedTotalBytes:(long long)a3;
- (BOOL)tryLoad;
- (void)apiBase:(id)a0 didResponse:(id)a1;
- (void)responseProcess:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)cancel;
- (unsigned long long)count;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)initWithURL:(id)a0 method:(id)a1;

@end
