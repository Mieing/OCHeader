@class NSString;

@interface IESLiveGameCPPerfSamplerServiceImpl : NSObject <IESGCPLivePerfSamplerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPerfSamplerWithModuleName:(id)a0 extraInfo:(id)a1;
- (void)stopPerfSamplerWithModuleName:(id)a0;

@end
