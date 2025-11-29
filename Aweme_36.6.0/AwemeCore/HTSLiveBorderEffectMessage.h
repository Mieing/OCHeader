@class NSString, HTSLiveCommon, HTSLiveImage;

@interface HTSLiveBorderEffectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int effectType;
@property (nonatomic) long long assetId;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) long long priority;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long endTime;

+ (id)descriptor;

@end
