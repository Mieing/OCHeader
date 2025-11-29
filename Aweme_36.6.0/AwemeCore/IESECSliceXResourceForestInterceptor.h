@class NSDictionary, NSString;

@interface IESECSliceXResourceForestInterceptor : NSObject <IESForestInterceptor>

@property (retain, nonatomic) NSDictionary *channelConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptorName;
- (void)didCreateRequest:(id)a0;
- (void)registerInterceptionConfigForChannel:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
