@class NSString, TIMXSDKInstance;

@interface TIMXLongConnectionErrorCheck : NSObject <TIMXLongConnectionServerErrorCheckProtocol, TIMXInstanceScopeAlwaysNewDIComponent> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long errorTimes;
@property (nonatomic) long long errorTimesMax;
@property (nonatomic) double errorInterval;
@property (nonatomic) double errorTimeStamp;
@property (nonatomic) BOOL isError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)longConnectionDidTimeout:(id)a0;
- (void)longConnectionDidReceiveMessage;
- (void)validLongConnection;
- (void)invalidLongConnectionWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)open;
- (BOOL)serverError;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
