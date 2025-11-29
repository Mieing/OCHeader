@class NSString, NSPointerArray, NSDictionary, AWEDataLayerNetworkRequestConfig, NSMutableArray, NSTimer;

@interface AWEDataLayerNetworkRequest : NSObject

@property (copy, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) AWEDataLayerNetworkRequestConfig *config;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain) NSPointerArray *waitingRequestsArray;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *headerFields;
@property long long retryTimes;
@property long long combineCount;
@property (retain) NSTimer *retryTimer;
@property (nonatomic) BOOL didFinish;

+ (id)requestWithIdentifier:(id)a0 config:(id)a1;

- (BOOL)shouldRequest;
- (void)executeCallbackWithResponse:(id)a0;
- (void)addWaitingRequest:(id)a0;
- (id)allWaitingRequests;
- (void)removeAllWaitingRequests;
- (id)getAllTokens;
- (void).cxx_destruct;
- (void)addCallback:(id)a0;

@end
