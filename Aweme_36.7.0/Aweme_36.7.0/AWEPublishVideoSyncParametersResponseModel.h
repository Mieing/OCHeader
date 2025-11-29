@class NSString;

@interface AWEPublishVideoSyncParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasClaimOriginPermission;
@property (nonatomic) BOOL isVideoExclusive;
@property (nonatomic) BOOL hasRewardProjectAuthorBenefit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
