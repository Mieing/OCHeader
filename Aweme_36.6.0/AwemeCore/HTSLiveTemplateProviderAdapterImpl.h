@class NSString;

@interface HTSLiveTemplateProviderAdapterImpl : IESLiveBaseAdapter <HTSLiveTemplateProviderAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseDisplayText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)parsePiecesFromDisplayText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)targetInstance;

@end
