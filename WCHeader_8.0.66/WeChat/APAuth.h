@class NSURLConnection, NSString;
@protocol APAuthDelegate;

@interface APAuth : APBase <GetA8KeyLogicDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate>

@property (retain, nonatomic) NSURLConnection *connection;
@property (nonatomic) int retryCount;
@property (weak, nonatomic) id<APAuthDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apAuthFromApBase:(id)a0;

- (void)dealloc;
- (void)start;
- (void)startIniOS9;
- (void)startWithMac:(id)a0;
- (void)cancel;
- (void)logout;
- (BOOL)checkExpired;
- (void)prepareForAuth;
- (BOOL)isFromCacheAndValid;
- (BOOL)isFromCacheAndExpired;
- (BOOL)isExpired;
- (id)currMac;
- (void)didStart;
- (void)didSuccess;
- (void)didExpired;
- (void)didFail:(BOOL)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
