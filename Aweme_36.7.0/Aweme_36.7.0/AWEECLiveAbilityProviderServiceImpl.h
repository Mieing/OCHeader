@class NSString;
@protocol IESECLiveAbilityProviderService, IESECLiveAbilityProviderBizDelegate;

@interface AWEECLiveAbilityProviderServiceImpl : NSObject <AWEECLiveAbilityProviderService>

@property (retain, nonatomic) id<IESECLiveAbilityProviderService> liveAbilityProviderService;
@property (retain, nonatomic) id<IESECLiveAbilityProviderBizDelegate> fakeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveAbilityProviderService:(id)a0;

- (id)initWithProviderService:(id)a0 andFakeDelegate:(id)a1;
- (id)DIContext;
- (void).cxx_destruct;

@end
