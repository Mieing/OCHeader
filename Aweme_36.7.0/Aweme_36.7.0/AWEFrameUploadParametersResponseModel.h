@class NSString, NSNumber, NSDictionary;

@interface AWEFrameUploadParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *fileHostName;
@property (retain, nonatomic) NSString *imageHostName;
@property (retain, nonatomic) NSNumber *fileRetryCount;
@property (retain, nonatomic) NSNumber *rwTimeout;
@property (retain, nonatomic) NSNumber *socketNumber;
@property (retain, nonatomic) NSString *authorization;
@property (retain, nonatomic) NSDictionary *authorization2;
@property (retain, nonatomic) NSNumber *maxFailTime;
@property (retain, nonatomic) NSNumber *maxFailTimeEnabled;
@property (retain, nonatomic) NSNumber *enableHttps;
@property (retain, nonatomic) NSString *userStoreRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
