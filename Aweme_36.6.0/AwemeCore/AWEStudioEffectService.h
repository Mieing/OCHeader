@class NSString;
@protocol AWEStudioEffectFilterServiceProtocol;

@interface AWEStudioEffectService : HTSService <AWEStudioEffectServiceProtocol>

@property (readonly, nonatomic) id<AWEStudioEffectFilterServiceProtocol> filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configEffectPlatform;
- (void).cxx_destruct;

@end
