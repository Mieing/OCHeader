@class NSString, PIAContainerRegisterEnv, NSURL, NSDictionary, PIAStreamingInterceptor, NSObject;

@interface PIAContext : NSObject

@property BOOL isWarnUp;
@property BOOL didFetchManifest;
@property BOOL didBindEngine;
@property BOOL didBindEnv;
@property BOOL didConnectWorker;
@property BOOL documentComplete;
@property (retain, nonatomic) PIAStreamingInterceptor *interceptor;
@property BOOL didStreaming;
@property BOOL isStreamingWarmUp;
@property (weak, nonatomic) NSObject *engine;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) PIAContainerRegisterEnv *env;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSDictionary *manifest;
@property (copy, nonatomic) NSDictionary *pageConfig;

- (id)initContextWithEngine:(id)a0 URL:(id)a1;
- (void).cxx_destruct;

@end
