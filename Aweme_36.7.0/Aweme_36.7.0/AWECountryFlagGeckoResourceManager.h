@class NSString, NSDictionary;

@interface AWECountryFlagGeckoResourceManager : NSObject <IESGurdEventDelegate>

@property (nonatomic) BOOL isInternalPackage;
@property (copy, nonatomic) NSString *downloadPackageId;
@property (copy, nonatomic) NSString *internalPackageId;
@property (retain, nonatomic) NSDictionary *settingsJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)gurdDidFinishDownloadingPackageForAccessKey:(id)a0 channel:(id)a1 packageInfo:(id)a2;
- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (BOOL)isCountryFlagGeckoResourceWithAccessKey:(id)a0 channel:(id)a1;
- (id)settingJsonWithKey:(id)a0;
- (id)getAllCountryFlagKeys;
- (id)getResourceVersion;
- (id)getCountryFlagWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)activeResources;

@end
