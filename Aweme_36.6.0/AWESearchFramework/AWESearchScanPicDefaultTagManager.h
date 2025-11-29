@class NSString;

@interface AWESearchScanPicDefaultTagManager : NSObject <AWESearchScanPicDefaultTagProtocol>

@property (nonatomic) long long timeoutPeriod;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupManager;
+ (id)sharedInstance;

- (id)getDefaultTagResultWithImage:(id)a0;
- (void)updateBusiness;
- (id)impGetDefaultTagResultWithImage:(id)a0 scene:(id)a1 channel:(id)a2;
- (id)getDefaultTagResultWithImage:(id)a0 scene:(id)a1 channel:(id)a2;
- (id)buildTaskDataFormImage:(id)a0;
- (void)trackPitayaEventWithSuccess:(BOOL)a0 error:(id)a1 costTime:(double)a2 scene:(id)a3 channel:(id)a4;
- (id)init;

@end
