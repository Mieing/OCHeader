@class NSString, BDLocationHMDCommonData;

@interface BDLocateTask : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *locateId;
@property (nonatomic) long long desiredAccuracy;
@property (retain, nonatomic) BDLocationHMDCommonData *commonData;
@property (nonatomic) BOOL firstCallBackTask;

- (BOOL)bindCompletion:(id /* block */)a0 timeoutCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestLocation;
- (void)cancel;

@end
