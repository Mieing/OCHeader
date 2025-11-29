@class NSString;

@interface AWEVideoUploadSpeedModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableSpeed;
@property (nonatomic) BOOL enableRoute;
@property (nonatomic) long long routeMode;
@property (nonatomic) long long routeWeight;
@property (nonatomic) long long speedThreshold;
@property (nonatomic) long long singleHostTotalTimeout;
@property (nonatomic) long long fileSize;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long cacheExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
