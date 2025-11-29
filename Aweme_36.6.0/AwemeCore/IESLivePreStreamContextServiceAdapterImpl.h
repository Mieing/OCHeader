@class NSString;

@interface IESLivePreStreamContextServiceAdapterImpl : IESLiveBaseAdapter <IESLivePreStreamContextServiceAdapter>

@property (nonatomic) BOOL enableLivePreMix;
@property (nonatomic) BOOL enablePreBootLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
