@class NSString;

@interface IESLiveRedEnvelopeBackendServiceImpl : NSObject <IESLiveRedEnvelopeBackendService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestRedEnvelopeBackEndData:(id /* block */)a0;

@end
