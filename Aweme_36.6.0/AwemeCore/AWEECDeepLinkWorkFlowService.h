@class NSString;

@interface AWEECDeepLinkWorkFlowService : NSObject <AWEDeepLinkWorkFlowServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableDeepLinkPrefetch;
+ (id)sharedInstance;

@end
