@class NSString, NSDictionary, NSArray;

@interface AWECFFracas : NSObject

@property (copy, nonatomic) NSString *domainName;
@property (copy, nonatomic) NSString *requestUrl;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSDictionary *bodyParams;
@property (nonatomic) long long engineType;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *osVersion;
@property (readonly, copy, nonatomic) NSString *systemName;
@property (readonly, copy, nonatomic) NSString *devicePlatform;
@property (readonly, copy, nonatomic) NSString *deviceHardwareType;
@property (readonly, copy, nonatomic) NSString *activeArch;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *appBuildVersion;
@property (retain, nonatomic) NSArray *quaterbacks;
@property (readonly, copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long requestType;

+ (id)requestWithModuleListURL:(id)a0 queryParams:(id)a1 formData:(id)a2 bodyData:(id)a3;

- (id)requestWithFormData:(id)a0 body:(id)a1;
- (id)contryCode;
- (void).cxx_destruct;

@end
