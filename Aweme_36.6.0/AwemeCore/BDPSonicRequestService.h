@class NSString, BDPUniqueID;

@interface BDPSonicRequestService : NSObject <BDPSonicAppServiceMessage, SonicAudioLoaderService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)setupCustomRegisterService:(id)a0 uniqueID:(id)a1;

- (void)loadUrl:(id)a0 withDelegate:(id)a1;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
