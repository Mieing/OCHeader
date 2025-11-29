@class NSString;

@interface HybridGurdConfigImpl : NSObject <HybridGurdConfigDelegate>

@property (copy, nonatomic) NSString *accessKeyName;
@property (copy, nonatomic) NSString *platformDomainName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)platformDomain;
- (BOOL)isNetworkDelegateEnabled;
- (BOOL)isBusinessDomainEnabled;
- (void).cxx_destruct;
- (id)accessKey;

@end
