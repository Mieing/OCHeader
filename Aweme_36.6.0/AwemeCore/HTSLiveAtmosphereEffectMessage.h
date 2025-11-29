@class NSString, HTSLiveCommon;

@interface HTSLiveAtmosphereEffectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long assetId;
@property (nonatomic) long long partnerAssetId;
@property (nonatomic) long long priority;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *actvityInformation;
@property (nonatomic) long long partnerHotsoonAssetId;

+ (id)descriptor;

@end
