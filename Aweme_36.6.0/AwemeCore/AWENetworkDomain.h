@class NSString;

@interface AWENetworkDomain : HTSService <AWENetworkDomainConfigFetch>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)config;
+ (void)update:(id)a0;


@end
