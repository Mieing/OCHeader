@class NSString;
@protocol AWEIronManModuleService;

@interface AWEACCIronManServiceDouyin : NSObject <ACCIronManServiceProtocol>

@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)ironManPublishStatus;
- (void)setIronManPublishStatusForPage:(long long)a0;
- (void)sendIronManMessageAtPage:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getDeviceName;

@end
