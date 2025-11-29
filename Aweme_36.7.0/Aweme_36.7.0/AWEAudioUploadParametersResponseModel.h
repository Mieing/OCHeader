@class NSString, NSNumber, NSDictionary;

@interface AWEAudioUploadParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *fileHostName;
@property (copy, nonatomic) NSString *imageHostName;
@property (retain, nonatomic) NSNumber *fileRetryCount;
@property (retain, nonatomic) NSNumber *rwTimeout;
@property (retain, nonatomic) NSNumber *socketNumber;
@property (copy, nonatomic) NSString *authorization;
@property (retain, nonatomic) NSNumber *maxFailTime;
@property (retain, nonatomic) NSNumber *maxFailTimeEnabled;
@property (copy, nonatomic) NSString *userStoreRegion;
@property (copy, nonatomic) NSDictionary *authorization2;
@property (copy, nonatomic) NSString *queryAuth;
@property (retain, nonatomic) NSNumber *enableHttps;
@property (copy, nonatomic) NSString *vcAppKey;
@property (copy, nonatomic) NSString *vcAuthorization;
@property (copy, nonatomic) NSDictionary *vcAuthorization2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
