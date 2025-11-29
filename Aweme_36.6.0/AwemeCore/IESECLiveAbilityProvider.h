@class NSString, IESECLiveContext;

@interface IESECLiveAbilityProvider : NSObject <IESECLiveAbilityProviderService>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveAbilityProviderService:(id)a0;

- (id)DIContext;
- (id)initWithLiveContext:(id)a0;
- (void).cxx_destruct;

@end
