@class NSArray, SECURLTrie, NSString;

@interface AWESECFeatures : NSObject <AWENetworkDomainMessage, AWEAppAwemeSettingMessage, SECNetFeatureProtocol, SECWebTrafficFeatureDetector, SECFeatureProtocol>

@property (retain) SECURLTrie *zijieDomainTrie;
@property (nonatomic) BOOL enableDomainTrie;
@property (copy) NSArray *sharedDomains;
@property (copy) NSArray *bdomains;
@property long long bdomainVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFeatures;
+ (BOOL)enableDomainTrie;

- (void)awemeSettingDidChange;
- (BOOL)is3rdPartTraffic:(id)a0 fromWebView:(id)a1;
- (double)is3rdPartyHost:(id)a0 path:(id)a1;
- (BOOL)is3rdPartyHost:(id)a0;
- (id)bizTagOfTraffic:(id)a0 fromWebView:(id)a1;
- (void)didUpdateNetworkDomainConfig:(id)a0;
- (void)updateZijieDomains;
- (id)_zijieDomains;
- (BOOL)_is3rdPartyHost:(id)a0 withBDomains:(id)a1;
- (BOOL)_is3rdPartyHost:(id)a0 withURLTrie:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
