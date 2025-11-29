@class NSString;

@interface IESLiveCloudCollaboratePerfModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *joinCloudLiveResult;
@property (copy, nonatomic) NSString *joinRtcResult;
@property (copy, nonatomic) NSString *joinApiResult;
@property (copy, nonatomic) NSString *replyAcceptApiResult;
@property (nonatomic) double joinCloudLiveDuration;
@property (nonatomic) double joinRtcDuration;
@property (nonatomic) double joinApiDuration;
@property (nonatomic) double replyAcceptApiDuration;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *devicePlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
