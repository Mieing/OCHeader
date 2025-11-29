@class NSString;

@interface HMDDomesticURLSettings : NSObject <HMDURLHostSettings>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHosts;
+ (id)configFetchDefaultHosts;


@end
