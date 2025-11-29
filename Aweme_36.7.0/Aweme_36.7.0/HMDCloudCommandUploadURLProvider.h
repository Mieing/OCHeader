@class NSString;

@interface HMDCloudCommandUploadURLProvider : HMDCloudCommandURLHostProvider <HMDURLProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLPathProviderURLPath:(id)a0;

@end
