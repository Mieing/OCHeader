@class NSString;

@interface IESGCPAppInfoService_Douyin : NSObject <IESGCPAppInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aIESGCPAppInfoServiceCommonAdapterClass;

- (id)appVersionCode;
- (id)commonParametersWithoutL0;
- (id)commonParametersWithUrlString:(id)a0;
- (BOOL)isBOEEnabled;
- (id)aIESGCPAppInfoServiceCommonAdapter;
- (id)appOpenURL;
- (id)appID;
- (id)appName;
- (id)channel;
- (id)deviceID;
- (id)installID;
- (id)accessCode;
- (unsigned long long)currentTarget;
- (id)appBuildNumber;

@end
