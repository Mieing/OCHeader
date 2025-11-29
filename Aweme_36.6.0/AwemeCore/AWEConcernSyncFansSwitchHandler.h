@class NSString;

@interface AWEConcernSyncFansSwitchHandler : NSObject <AWEConcernSyncFansSwitchHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSettingsWithKeys:(id)a0 completion:(id /* block */)a1;
- (void)fetchSyncFansSwitchStatusWithCompletion:(id /* block */)a0;
- (id)urlPath;

@end
