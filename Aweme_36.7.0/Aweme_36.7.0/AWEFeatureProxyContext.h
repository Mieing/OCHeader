@class NSArray, NSString;

@interface AWEFeatureProxyContext : NSObject <AWEFeatureContext>

@property (copy, nonatomic) NSArray *innerContexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
