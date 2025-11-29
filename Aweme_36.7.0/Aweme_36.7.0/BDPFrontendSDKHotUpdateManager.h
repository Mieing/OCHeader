@class NSString, NSNumber, NSURL;

@interface BDPFrontendSDKHotUpdateManager : NSObject <BDPAutoTestable>

@property (copy, nonatomic) NSString *serverURL;
@property (copy, nonatomic) NSString *restartType;
@property (nonatomic) double interval;
@property (nonatomic) long long times;
@property (retain, nonatomic) NSNumber *updateTime;
@property (retain, nonatomic) NSURL *originURL;
@property (retain, nonatomic) NSURL *updateURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;

- (BOOL)autoTestWithParam:(id)a0;
- (void)reStartApp;
- (void)requestToDevServerWithConnectID:(int)a0 retryTimes:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
