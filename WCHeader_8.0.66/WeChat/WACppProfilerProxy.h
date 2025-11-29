@class NSString;

@interface WACppProfilerProxy : NSObject <IWACppProfilerProxyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendFileToFileHelper:(id)a0;


@end
