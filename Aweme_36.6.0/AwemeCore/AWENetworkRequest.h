@class NSString, NSDictionary, NSURL, AWENetworkPerfromanceMetrics, NSObject;
@protocol OS_dispatch_queue;

@interface AWENetworkRequest : NSObject

@property (retain, nonatomic) AWENetworkPerfromanceMetrics *metrics;
@property (retain, nonatomic) AWENetworkPerfromanceMetrics *metrics;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preprocessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ttnetCallbackQueue;
@property (nonatomic) BOOL completeCallInBackgroundThread;
@property (nonatomic) BOOL waitsForConnectivity;
@property (retain, nonatomic) Class modelClass;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL autoResume;
@property (retain, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL isCustomizedCookie;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class responseSerializer;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ completionWithRespBlock;
@property (copy, nonatomic) id /* block */ metricsBlock;
@property (nonatomic) BOOL enableCache;
@property (nonatomic) long long maxRetryTime;
@property (nonatomic) long long retryTime;
@property (nonatomic) long long waitState;
@property (copy, nonatomic) id /* block */ connectivityRetryBlock;
@property (retain, nonatomic) NSString *targetPath;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;
@property (retain, nonatomic) NSURL *uploadFileURL;
@property (retain, nonatomic) NSString *uploadFileName;
@property (copy, nonatomic) id /* block */ bodyBlock;
@property (nonatomic) long long codableStrategy;
@property (retain, nonatomic) id modelType;
@property (nonatomic) BOOL createResponseModelByPB;
@property (nonatomic) BOOL createResponseModelBySonic;
@property (nonatomic) BOOL createResponseModelByDefault;

+ (id)createRequestWithBlock:(id /* block */)a0;

- (void)networkStatesDidChanged:(id)a0;
- (Class)p_networkRequestSerializer;
- (BOOL)enableSetBodyOpt;
- (BOOL)shoulWaitingForConnectivity:(id)a0;
- (BOOL)shouldRetryWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
