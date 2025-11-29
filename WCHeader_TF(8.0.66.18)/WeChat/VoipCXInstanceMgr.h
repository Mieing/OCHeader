@class CXCallController, CXProvider, NSString;

@interface VoipCXInstanceMgr : MMRootService <MMServiceProtocol>

@property (readonly, nonatomic) CXCallController *cxController;
@property (readonly, nonatomic) CXProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)renewRingToneSoundForCaller:(id)a0;
- (void).cxx_destruct;

@end
