@class NSString;
@protocol CommonAffServiceCenter;

@interface AffBizUserServiceCenter : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) id<CommonAffServiceCenter> serviceCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void).cxx_destruct;

@end
