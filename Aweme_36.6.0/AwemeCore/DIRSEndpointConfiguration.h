@class NSString;

@interface DIRSEndpointConfiguration : NSObject <IRISEndpoint>

@property (copy, nonatomic) id /* block */ domainBlock;
@property (copy, nonatomic) id /* block */ endpointBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationUsingBlock:(id /* block */)a0;
+ (id)configurationUsingDomainBlock:(id /* block */)a0;

- (id)endpointForService:(unsigned long long)a0 context:(id)a1;
- (id)domainForService:(unsigned long long)a0 context:(id)a1;
- (void).cxx_destruct;

@end
