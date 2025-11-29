@class NSString;
@protocol HMDNetworkProvider;

@interface HMDPerformanceReporterURLPathProvider : NSObject <HMDURLPathProvider>

@property (weak, nonatomic) id<HMDNetworkProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLPathProviderURLPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;

@end
