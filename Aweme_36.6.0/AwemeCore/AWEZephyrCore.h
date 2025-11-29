@class NSString;

@interface AWEZephyrCore : NSObject <InstallAndDeviceIDMessage, BDQBDelegate>

@property (nonatomic) BOOL shouldFetchWhenActive;
@property (nonatomic) long long fetchInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (void)didReady;
- (void)fetchWhenActive;
- (id)queryVersionFromData:(id)a0;
- (void)track:(long long)a0 errorType:(id)a1 errorDesc:(id)a2 param:(id)a3;
- (void)track:(long long)a0 errorType:(id)a1 errorDesc:(id)a2 param:(id)a3 moduleVersion:(id)a4;
- (void)didFailFetchListWithError:(id)a0;
- (void)moduleData:(id)a0 didFetchWithError:(id)a1;
- (void)moduleData:(id)a0 didLoadWithError:(id)a1;
- (void)moduleData:(id)a0 willLoadWithError:(id)a1;
- (void)engineDidInitWithError:(id)a0 type:(long long)a1;
- (void)engineDidRunWithError:(id)a0 type:(long long)a1;
- (id)init;
- (void)fetch;
- (void)start;
- (void)dealloc;

@end
